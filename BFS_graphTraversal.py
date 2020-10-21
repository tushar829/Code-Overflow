# BFS adjencncy list implementation
# we can use dictionary to use adjency list

graph={
    "A":["B","D"],
    "B":["A","C"],
    "C":["B"],
    "D":["A","E","F"],
    "E":["D","F","G"],
    "F":["D","E","H"],
    "G":["E","H"],
    "H": ["G","F"]

}

def BFS():
    queue=[]

    visited=[]

    parent=[]
    level={}

    start="A"
    queue.append(start)

    visited.append(start)

    while len(queue)!=0:
        parent=queue.pop(0)
        print(parent)
        level[start]=0

        for i in graph[parent]:
            if i not in visited:
                visited.append(i)
                queue.append(i)
                level[i]=level[parent]+1

    print(level)

BFS()
