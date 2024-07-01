#include <iostream>
#include <vector>
using namespace std;

int custom(int n, int i){
    if( n == 0){
        return 1;
    }
    if( i % 2 == 0){
        return n * custom(n-1, ++i);
    }
    else {
        return n + custom(n-1, ++i);
    }
}

int main(){
    int n;

    cout << "Enter the value: ";
    cin >> n;
    cout << "Answer: " << custom(n, 0) << endl;
}

/*
input: 5 * 4 + 3 * 2 + 1
output: 65

don't forget to add pre increment
*/
