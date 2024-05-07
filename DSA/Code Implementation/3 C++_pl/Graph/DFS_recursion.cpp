


#include <iostream>
#include <vector>


using namespace std;

    vector<int> adj[10];
    bool visited[10] = {false};

    void add_Edge( int u, int v){
        adj[u].push_back(v);

    }
//pushing v into the adjacency list of u

    void DFS( int start_node){


        visited[start_node] = true;
        cout << start_node << " ";



            for( int i = 0 ; i< adj[start_node].size() ; i++){

                if( !visited[adj[start_node][i]]){
                    DFS(adj[start_node][i]);
                }
            }

    }


int main(){


   int n;
    cout << "Enter the  number of edges";
    cin >> n;

    for( int i= 0 ; i < n; i++){
        int u, v;
          cout << "Enter edge no " << i+1 << ": ";
             cin >>u >> v;
             add_Edge(u, v);
     }

    cout << "DFS traversal: ";

    DFS(0);

    cout << "DFS traversal: ";

    DFS(0);

}

/*

input:
0 2
0 1
1 3
2 0
2 3
2 4

DFS traversal: 0 2 3 4 1


*/
