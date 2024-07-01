/*
recursion in two ways
1) parameterize (sum of numbers)
2) functional (sum of numbers)  + Ex: Factorial

*/

/*
#parameterize
    input: 4
    output: 10

#functional
    input: 4
    output: 10

#functional
    factorial
    input: 3
    output: 6
*/



#include <iostream>
using namespace std;

//parameterize
void f1(int n,int sum){
    if(n < 0){
        cout << "Sum: " << sum;
        return;
    }
    f1(n-1, sum + n);
}

//functional
int f2(int n){
    if(n == 0){
        return 0;
    }
    return n + f2(n-1);
}

//functional factorial
int f3(int n){
    if(n == 1){
        return 1;
    }
    return n * f3(n-1);
}


int main(){

int n = 4;
f1(4, 0);
cout << endl;

cout << f2(4);
cout << endl;


cout << f3(3) << endl;




}
