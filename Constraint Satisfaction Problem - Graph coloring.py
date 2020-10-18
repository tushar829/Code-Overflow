class Vertex:
    def __init__(self, name):
        self.name = name
        self.neighbors = []
        self.heuristic = 0
        self.visited = 0
        self.color = ['red', 'blue', 'green']

    def add_neighbor(self, vertex):
        if vertex not in self.neighbors:
            self.neighbors.append(vertex)
            self.neighbors.sort()
            self.heuristic = len(self.neighbors)

class Graph:
    vertices = {}

    def add_vertex(self, vertex):
        if isinstance(vertex, Vertex) and vertex.name not in self.vertices:
            self.vertices[vertex.name] = vertex
            return True
        return False

    def add_edge(self, u, v):
        if u in self.vertices and v in self.vertices:
            for key, value in self.vertices.items():
                if key == u:
                    value.add_neighbor(v)
                if key == v:
                    value.add_neighbor(u)
            return True
        return False

    def sorter(self):
        res = [[self.vertices[key].heuristic, key] for key in self.vertices]
        res.sort(reverse=True)
        return res

    def decolorer(self, n_li, decolor):
        for neighbor in n_li:
            if self.vertices[neighbor].visited == 0:
                try:
                    self.vertices[neighbor].color.remove(decolor)
                except:
                    continue

    def csp(self):
        li = self.sorter()
        queue = [self.vertices[key[1]] for key in li]
        count = 0
        result = []
        while count != len(queue):
            queue[count].visited = 1
            queue[count].color = queue[count].color.pop(0)

            self.decolorer(queue[count].neighbors, queue[count].color)
            result.append([queue[count].name, queue[count].color])
            count += 1
        print('result  :', result, '\n')

    def print_graph(self):
        print('Graph nodes and their neighbors:')
        li = self.sorter()
        for key in li:
            print(key[1] + ' ( ' + str(self.vertices[key[1]].heuristic) + ' )' ': ' + str(self.vertices[key[1]].neighbors))

if __name__=="__main__":
    #Example 1
    graph = Graph()

    #Following are elements of V
    a = Vertex('A')
    b = Vertex('B')
    c = Vertex('C')
    d = Vertex('D')
    e = Vertex('E')
    f = Vertex('F')
    g = Vertex('G')

    graph.add_vertex(a)
    graph.add_vertex(b)
    graph.add_vertex(c)
    graph.add_vertex(d)
    graph.add_vertex(e)
    graph.add_vertex(f)
    graph.add_vertex(g)

    edges = ['AB', 'AC', 'CD', 'CE', 'DE', 'BE', 'BF', 'FG', 'EG']
    for edge in edges:
        graph.add_edge(edge[:1], edge[1:])

    graph.print_graph()
    print('\n')
    graph.csp()

"""
    #Example 2
    graph2 = Graph()
    p = Vertex('P')
    q = Vertex('Q')
    r = Vertex('R')
    s = Vertex('S')

    graph2.add_vertex(p)
    graph2.add_vertex(q)
    graph2.add_vertex(r)
    graph2.add_vertex(s)

    edges = ['PQ', 'PR', 'PS', 'RS', 'QS']
    for edge in edges:
        graph2.add_edge(edge[:1], edge[1:])

    graph2.print_graph()
    print('\n')
    graph2.csp()
"""    