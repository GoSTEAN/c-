#include <iostream>
#include <vector>
#include <queue>
#include <stack>

class Graph {
public:
    int numVertices;
    std::vector<std::vector<int>> adjacencyMatrix;

    Graph(int vertices) : numVertices(vertices), adjacencyMatrix(vertices, std::vector<int>(vertices, 0)) {}

    void addEdge(int from, int to) {
        adjacencyMatrix[from][to] = 1;
        adjacencyMatrix[to][from] = 1;
    }

    void depthFirstSearch(int startVertex) {
        std::vector<bool> visited(numVertices, false);
        std::stack<int> stack;

        stack.push(startVertex);
        visited[startVertex] = true;

        while (!stack.empty()) {
            int currentVertex = stack.top();
            stack.pop();

            std::cout << currentVertex << " ";

            for (int neighbor = 0; neighbor < numVertices; ++neighbor) {
                if (adjacencyMatrix[currentVertex][neighbor] == 1 && !visited[neighbor]) {
                    stack.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }

        std::cout << std::endl;
    }

    void breadthFirstSearch(int startVertex) {
        std::vector<bool> visited(numVertices, false);
        std::queue<int> queue;

        queue.push(startVertex);
        visited[startVertex] = true;

        while (!queue.empty()) {
            int currentVertex = queue.front();
            queue.pop();

            std::cout << currentVertex << " ";

            for (int neighbor = 0; neighbor < numVertices; ++neighbor) {
                if (adjacencyMatrix[currentVertex][neighbor] == 1 && !visited[neighbor]) {
                    queue.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }

        std::cout << std::endl;
    }
};

int main() {
    Graph myGraph(5);
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 2);
    myGraph.addEdge(1, 3);
    myGraph.addEdge(2, 4);

    std::cout << "Depth-First Search result: ";
    myGraph.depthFirstSearch(0);  // Output: 0 2 4 1 3

    std::cout << "Breadth-First Search result: ";
    myGraph.breadthFirstSearch(0);  // Output: 0 1 2 3 4

    return 0;
}
