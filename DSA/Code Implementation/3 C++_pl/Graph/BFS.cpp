//undirected gra


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

    vector<int> adj[10];
    bool visited[10] = {false};

    void add_Edge( int u, int v){
        adj[u].push_back(v);
    }
//pushing v into the adjacency list of u

    void BFS( int start_node){
        queue<int> q;
        q.push(start_node);
        visited[start_node] = true;

        while( !q.empty()){
            int u = q.front();
            cout << u << " ";
            q.pop();

            for( int i = 0 ; i< adj[u].size() ; i++){

                if( !visited[adj[u][i]]){
                    q.push(adj[u][i]);
                    visited[adj[u][i]] = true;
                }
            }
        }
    }


int main(){


    add_Edge(0, 2);
    add_Edge(0, 1);
    add_Edge(1, 3);
    add_Edge(2, 0);
    add_Edge(2, 3);
    add_Edge(2, 4);

    cout << "BFS traversal: ";

    BFS(0);

}


/*

output:
BFS traversal: 0 2 1 3 4

*/
