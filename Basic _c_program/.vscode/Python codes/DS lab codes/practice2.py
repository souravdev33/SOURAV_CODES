class Graph:
    def __init__(self, vertex):
        self.V = vertex
        self.G = [[0 for _ in range(vertex)] for _ in range(vertex)]

    def add_edge(self, v1, v2):
        self.G[v1][v2] = 1
        self.G[v2][v1] = 1

    def BFS(self, start):
        queue = [start]
        visited = [False] * self.V
        visited[start] = True

        while queue:
            current = queue.pop(0)
            print(current, end=' ')

            for i in range(self.V):
                if self.G[current][i] == 1 and not visited[i]:
                    queue.append(i)
                    visited[i] = True

    def get_degree(self, user):
        degree = 0
        for i in range(self.V):
            degree += self.G[user][i]
        return degree

    def most_influential_users(self):
        influential_users = []
        max_degree = -1
        for user in range(self.V):
            degree = self.get_degree(user)
            if degree > max_degree:
                max_degree = degree
                influential_users = [user]
            elif degree == max_degree:
                influential_users.append(user)
        return influential_users
    
    def count_directly_connected_vertices(self, vertex):
        return sum(self.G[vertex])
    
    def count_connected_users(self, user):
        visited = [False] * self.V
        queue = [user]
        visited[user] = True
        count = 0

        while queue:
            current_user = queue.pop(0)
            count= count+1

            for i in range(self.V):
                if self.G[current_user][i] == 1 and not visited[i]:
                    queue.append(i)
                    visited[i] = True

        return count

    def test_network(self):
        for user in range(self.V):
            print(f"User {user}:")
            print("BFS Traversal:")
            self.BFS(user)
            influential_users = self.most_influential_users()
            print("\nMost Influential Users:", influential_users)
            connected_users_count = self.count_directly_connected_vertices(user)
            print(f"Number of users directly connected to user {user}: {connected_users_count}\n")
            connected_users_count = self.count_connected_users(user)
            print(f"Number of users indirectly connected to user {user}: {connected_users_count}\n")
            

# User input for the number of vertices and edges
vertex = int(input("Enter the number of vertices: "))
num_edges = int(input("Enter the number of edges: "))

# Graph creation
g = Graph(vertex)
for _ in range(num_edges):
    v1, v2 = map(int, input("Enter an edge (V1 V2): ").split())
    g.add_edge(v1, v2)

# Testing the network for each user
g.test_network()
