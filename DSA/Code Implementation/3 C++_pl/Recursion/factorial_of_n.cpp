
#include <iostream>
using namespace std;


int sum_fact(int n){

        if( n == 0){
            return 1;
        }
        return n * sum_fact(n - 1);
}

int main(){
int n, sum = 0;
cout << "Enter: " ;
cin >> n;

int s = sum_fact(n);
cout << "sum: " << s;

}
