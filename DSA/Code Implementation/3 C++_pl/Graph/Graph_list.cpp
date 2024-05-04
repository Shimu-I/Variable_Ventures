#include <iostream>
#include <iterator>
#include <list>;

using namespace std;

void Display_Matrix_List(list<int> ad_list[], int v){
    for( int i= 0 ; i < v ; i++){
        cout << i << " --> ";
        list<int> :: iterator it;

        for( it = ad_list[i].begin() ; it != ad_list[i].end() ; it++ ){

            cout << *it << " ";
        }
        cout << endl;
    }
}


void add_Edge(list<int> ad_list[], int v, int u){
    //for undirected graph
    ad_list[v].push_back(u);
    ad_list[u].push_back(v);
}

int main(){
    int v = 6;
    list<int> ad_list[v];

  add_Edge(ad_list, 0, 4);
  add_Edge(ad_list, 0, 3);
  add_Edge(ad_list, 1, 2);
  add_Edge(ad_list, 1, 4);
  add_Edge(ad_list, 1, 5);
  add_Edge(ad_list, 2, 3);
  add_Edge(ad_list, 2, 5);
  add_Edge(ad_list, 5, 3);
  add_Edge(ad_list, 5, 4);


Display_Matrix_List(ad_list, 6);


}

/*
out put:
0 --> 4 3
1 --> 2 4 5
2 --> 1 3 5
3 --> 0 2 5
4 --> 0 1 5
5 --> 1 2 3 4

*/


/*
for( it = adj_list[i].begin(); it != adj_list[i].end(); ++it): This line starts a loop that iterates over each element in the adjacency list of vertex i.

adj_list[u].push_back(v): This line adds vertex v to the adjacency list of vertex u


*/
