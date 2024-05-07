#include <iostream>
using namespace std;

class Graph{
            public:
            int vertices;
            bool **matrix;

            Graph(int vertices){
                this -> vertices = vertices;
                matrix = new bool*[vertices];

                for(int i = 0 ; i < vertices ; i++){
                        matrix[i] = new bool[vertices];

                        for( int j = 0 ; j < vertices ; j++){
                                matrix[i][j]  = false;
                        }
                }
            }

void add_Edge(int i , int j){
    //for an indirected graph
    matrix[i][j] = true;
   matrix[j][i] = true;
}


void toString(){
    for(int i = 0 ; i < vertices ; i++){
            cout << i << " : ";

                for( int j = 0 ; j < vertices ; j++){
                        cout <<  matrix[i][j] << " " ;
                }
            cout << endl;
    }
}

};



int main(){
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;
    Graph g(v);

    cout << "Enter the number of edges: ";
    cin >> e;
    for(int i = 0; i < e; i++) {
        int u, v;
        cout << "Enter edge " << i+1 << ": ";
        cin >> u >> v;
        g.add_Edge(u, v);
    }

    g.toString();
    return 0;
}




/*
Output:
0 :0 0 0 1 1 0
1 :0 0 1 0 1 1
2 :0 1 0 1 0 1
3 :1 0 1 0 0 1
4 :1 1 0 0 0 1
5 :0 1 1 1 1 0


*/
