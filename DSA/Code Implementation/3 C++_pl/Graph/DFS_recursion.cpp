


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


    add_Edge(0, 2);
    add_Edge(0, 1);
    add_Edge(1, 3);
    add_Edge(2, 0);
    add_Edge(2, 3);
    add_Edge(2, 4);

    cout << "DFS traversal: ";

    DFS(0);

}

/*
DFS traversal: 0 2 3 4 1


*/
