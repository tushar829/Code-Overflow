class Vertex:
    def __init__(self, name, heuristic):
        self.name = name
        self.hr = heuristic
        self.neighbors = []
        self.visited = 0
    
    def add_neighbor(self, v):
        if v not in self.neighbors:
            self.neighbors.append(v)
            self.neighbors.sort()

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
    
    def priority(self, queue):
        rank = []
        for i in queue:
            for j in self.vertices:
                if i.name == j and i.visited == 0:
                    rank.append(i.hr)
        rank.sort()
        queue = []
        for i in rank:
            for j in self.vertices:
                if i == self.vertices[j].hr:
                    queue.append(self.vertices[j])
        return queue

    def BestFirstSearch(self, start, end):
        ol = []
        cl = []

        ol.append(start)
        while ol != []:
            temp = ol.pop(0)
            temp.visited = 1
            if temp.name == end.name:
                cl.append(end.name)
                break
            cl.append(temp.name)

            queue = []
            queue += [self.vertices[i] for i in temp.neighbors]
            ol += queue
            ol = self.priority(ol)
        return cl

if __name__=='__main__':
    graph = Graph()
    """
    #Example 1:

    a = Vertex('A', 10)
    b = Vertex('B', 2)
    c = Vertex('C', 1)
    d = Vertex('D', 5)
    e = Vertex('E', 6)
    f = Vertex('F', 0)
    g = Vertex('G', 7)

    graph.add_vertex(a)
    graph.add_vertex(b)
    graph.add_vertex(c)
    graph.add_vertex(d)
    graph.add_vertex(e)
    graph.add_vertex(f)
    graph.add_vertex(g)

    edges = ['AB', 'AC', 'AD', 'BE', 'CF', 'DG', 'EF', 'GF']
    for edge in edges:
        graph.add_edge(edge[:1], edge[1:])
    """
    
    #Example 2:

    a = Vertex('A', 80)
    b = Vertex('B', 50)
    c = Vertex('C', 40)
    d = Vertex('D', 20)
    e = Vertex('E', 30)
    f = Vertex('F', 0)

    graph.add_vertex(a)
    graph.add_vertex(b)
    graph.add_vertex(c)
    graph.add_vertex(d)
    graph.add_vertex(e)
    graph.add_vertex(f)

    edges = ['AB', 'AC', 'AE', 'BF', 'CE', 'BD', 'DF', 'EF']
    for edge in edges:
        graph.add_edge(edge[:1], edge[1:])

    path = graph.BestFirstSearch(a, f)

    fstr = ''
    for node in range(len(path)):
        if node == len(path) - 1:
            fstr += path[node]
            break
        fstr += path[node] + ' --> '
    print(fstr)