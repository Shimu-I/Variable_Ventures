#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    // Depth-First Search (DFS) function
    void dfs(int node, int vis[], stack<int>& st, vector<int> adj[]) {
        vis[node] = 1;
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfs(it, vis, st, adj);
            }
        }
        st.push(node);
    }

    // Topological Sort function
    vector<int> topoSort(int V, vector<int> adj[]) {
        vector<int> ans;
        stack<int> st;
        int vis[V] = {0};

        for (int i = 0; i < V; ++i) {
            if (!vis[i]) {
                dfs(i, vis, st, adj);
            }
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        return ans;
    }
};

int main() {
    // Example usage
    int V = 5; // Number of vertices
    vector<int> adj[V]; // Adjacency list (populate with your graph)

    // Example graph
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(3);
    adj[3].push_back(4);

    // Call topoSort function
    Solution sol;
    vector<int> result = sol.topoSort(V, adj);

    // Print the topological order
    cout << "Topological Order: ";
    for (int node : result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}

