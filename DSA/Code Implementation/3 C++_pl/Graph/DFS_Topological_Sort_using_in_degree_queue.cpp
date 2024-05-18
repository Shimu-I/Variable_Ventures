
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> adj[10];
bool visited[10] = {false};
int inDegree[10] = {0}; // Initialize in-degree array

void add_Edge(int u, int v) {
    adj[u].push_back(v);
    inDegree[v]++; // Increment in-degree for vertex v
}

void topologicalSort(int numNodes) {
    queue<int> q;

    for (int i = 0; i < numNodes; i++) {
        if (inDegree[i] == 0) {
            q.push(i); // Add vertices with in-degree 0 to the queue
        }
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " "; // Print or add to result list

        for (int v : adj[u]) {
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
            }
        }
    }
}

int main() {
    int numNodes, numEdges;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    for (int i = 0; i < numEdges; i++) {
        int u, v;
        cout << "Enter edge no " << i + 1 << ": ";
        cin >> u >> v;
        add_Edge(u, v);
    }

    cout << "Topological sort: ";
    topologicalSort(numNodes);

    return 0;
}


/*
Vertices: 0, 1, 2, 3, 4, 5
Edges: (5, 2), (5, 0), (4, 0), (4, 1), (2, 3), (3, 1)

   5
  / \
 2   0
 |  / \
 3     1
  \   /
   4

output:
The topological sort of this graph would be: 5 4 2 3 1 0.
*/
