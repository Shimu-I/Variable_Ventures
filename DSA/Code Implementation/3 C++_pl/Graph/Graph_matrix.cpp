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
    Graph g(6);


  g.add_Edge(0, 4);
  g.add_Edge(0, 3);
  g.add_Edge(1, 2);
  g.add_Edge(1, 4);
  g.add_Edge(1, 5);
  g.add_Edge(2, 3);
  g.add_Edge(2, 5);
  g.add_Edge(5, 3);
  g.add_Edge(5, 4);


    g.toString();


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
