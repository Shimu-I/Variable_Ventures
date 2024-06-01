#include <iostream>
using namespace std;


int sum_f(int n){

        if( n == 0){
            return 0;
        }
        return n + sum_f(n - 1);
}

int main(){
int n, sum = 0;
cout << "Enter: " ;
cin >> n;

int s = sum_f(n);
cout << "sum: " << s;

}
