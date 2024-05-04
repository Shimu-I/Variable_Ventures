


#include <iostream>
#include <vector>


using namespace std;

    vector<int> adj[10];
    bool visited[10] = {false};
    int in_degree[10] = {0};
    int out_degree[10] = {0};


    void add_Edge( int u, int v){
        adj[u].push_back(v);
        in_degree[v]++;
        out_degree[u]++;

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

cout << endl;

for( int i = 0 ; i < 5 ; i++){

        cout << "For Index: " << i << "   -->   "  << "[ In Degree: " << in_degree[i] << " and" << " Out Degree: " << out_degree[i] << " ]" << endl;

}

}

/*
DFS traversal: 0 2 3 4 1
For Index: 0   -->   [ In Degree: 1 and Out Degree: 2 ]
For Index: 1   -->   [ In Degree: 1 and Out Degree: 1 ]
For Index: 2   -->   [ In Degree: 1 and Out Degree: 3 ]
For Index: 3   -->   [ In Degree: 2 and Out Degree: 0 ]
For Index: 4   -->   [ In Degree: 1 and Out Degree: 0 ]


*/
