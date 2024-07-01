/*
problems
1) print names 5 times
2) print linearly from 1 to N
3) print from N to 1
4) print linearly from 1 to N (using backtracking)
5) print from N to 1 (using backtracking)
*/
#include <iostream>
using namespace std;

//input 3 3
//output  Irish Irish Irish
void f1(int a, int n){
    if( a < 1 ){
        return;
    }
    cout << "Irish" << " " ;
    f1(a-1 , n);

}

//input 1 3
//output 1 2 3
void f2(int a, int n){
    if( a > n ){
        return;
    }
    cout << a << " " ;
    f2(a+1 , n);

}

//input 3 3
//output 3 2 1
void f3(int a, int n){
    if( a < 1 ){
        return;
    }
    cout << a << " " ;
    f3(a-1 , n);

}

//input 3 3 (using backtracking)
//output 1 2 3
void f4(int a, int n){
    if( a < 1 ){
        return;
    }
    f4(a-1 , n);
    cout << a << " " ;
}

//input 1 3   (using backtracking)
//output 3 2 1
void f5(int a, int n){
    if( a > n ){
        return;
    }
    f5(a+1 , n);
    cout << a << " " ;
}


int main(){
    int a, n;

    cout << "Enter:  ";
    cin >> a >> n;

    //f1(a, n);
    //f2(a, n);
    //f3(a, n);
    //f4(a, n);
    f5(a, n);
}
