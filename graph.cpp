#include <iostream>
#include <vector>

class Graph {
public:
    int numVertices;
    std::vector<std::vector<int> > adjacencyMatrix; // Note the space here

    Graph(int vertices) : numVertices(vertices), adjacencyMatrix(vertices, std::vector<int>(vertices, 0)) {}

    void addEdge(int from, int to) {
        adjacencyMatrix[from][to] = 1;
        adjacencyMatrix[to][from] = 1;
    }
};

int main() {
    Graph myGraph(5);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(1, 3);
    myGraph.addEdge(2, 4);

    // Display the adjacency matrix
    std::cout << "Adjacency Matrix:\n";
    for (int i = 0; i < myGraph.numVertices; ++i) {
        for (int j = 0; j < myGraph.numVertices; ++j) {
            std::cout << myGraph.adjacencyMatrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
