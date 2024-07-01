
#include <iostream>
using namespace std;

int f(int a){
    if(a == 0 || a == 1){
        return a;
    }
    int pre = f(a-1);
    int spre = f(a-2);

    return pre + spre;
}


int main(){

    f(4);
    for(int i= 0; i < 4 ; i++){
        cout << f(i) << " ";
    }

}

/*

Fibonacci 0 1 1 2 3 5 8 13 21


*/
