class Graph:
    def __init__(self,vertex):
        self.V=vertex
        self.G=[[0 for row in range(vertex)]for col in range(vertex)]
        
    def add_edge(self,v1,v2):
        self.G[v1][v2]=1
        self.G[v2][v1]=1 
        
    def BFS(self,st):
        Q=[st]
        Vs=[False]*self.V
        Vs[st]=True
        while Q:
            F=Q.pop(0)
            print(F,end=' ')
            for i in range(self.V):
                if self.G[F][i]==1 and not Vs[i]:
                    Q.append(i)
                    Vs[i]=True
    
            
        
    def print_G(self):
        for i in range(self.V):
            for j in range(self.V):
                print(self.G[i][j],end=' ')
                
            print()
            

g=Graph(6)
g.add_edge(0,1)
g.add_edge(1,4)
g.add_edge(1,2)
g.add_edge(2,4)
g.add_edge(2,3)
g.add_edge(4,5)
g.add_edge(3,4)

g.print_G()
g.BFS(0)