#include <iostream>
#include <iterator>
#include <list>

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
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;

    list<int> ad_list[v];

    cout << "Enter the number of edges: ";
    cin >> e;

    
    for(int i = 0; i < e; i++) {
        int u, v;
        cout << "Enter edge " << i+1 << ": ";
        cin >> u >> v;
        add_Edge(ad_list, u, v);
    }

    Display_Matrix_List(ad_list, v);
    return 0;
}



/*
input:
v= 6

0 4
0 3
1 2
1 4
1 5
2 3
2 5
5 3
5 4


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
