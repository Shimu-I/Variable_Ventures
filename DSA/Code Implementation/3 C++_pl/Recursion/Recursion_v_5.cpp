/*
Multiple recursion calls
Example: Fibonacci 0 1 1 2 3 5 8 13 21 .....
*/

/*
input: 4
output: 3

pre = previous
spre = second previous

*/
#include <iostream>
using namespace std;

int f(int a){
    if(a <= 1){
        return a;
    }
    int pre = f(a-1);
    int spre = f(a-2);

    return pre + spre;
}


int main(){

    cout << f(4);

}

