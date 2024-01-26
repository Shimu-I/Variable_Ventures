/*
#include <iostream>
using namespace std;
int main(){



}


*/



//practice problem
//Q21
/*
Q21
n=4
      1
    1 2 1
  1 2 3 4 1
1 2 3 4 3 2 1

*/
#include <iostream>
using namespace std;
int main(){

int n, r = 1;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){
    int c = 1;
    while( c <= n - r){
        cout << " " <<" ";
        c++;
    }
    int s = 1;
    while(s <= r ){
        cout<< s<< " ";
        s++;
    }
    int k = 1;
    p = n - (r - 1);

    while( k <= (n- (r - 1))){
        cout<< p <<" ";
        p--;
        k++;
    }
    cout<<endl;
    r++;
 }
}



//practice problem
//Q22
/*
Q22
n=5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1 

#include <iostream>
using namespace std;
int main(){

int n, r = 1;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){
    int c = 1;
    while( c <= n - (r - 1)){
        cout << c <<" ";
        c++;
    }
    int s = 1;
    while(s <= (r * 2 - 2)){
        cout<< "*"<< " ";
        s++;
    }
    int k = 1, p;
    p = n - (r - 1);

    while( k <= (n- (r - 1))){
        cout<< p <<" ";
        p--;
        k++;
    }
    cout<<endl;
    r++;
 }
}
*/