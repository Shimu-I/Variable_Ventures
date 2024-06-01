#include <iostream>
using namespace std;


void sum_p(int i, int sum){

        if( i < 0){
            cout << "sum: " << sum;
            return;
        }
        sum_p(--i, sum + i);
}

int main(){
int n, sum = 0;
cout << "Enter: " ;
cin >> n;

sum_p(n, sum);

}
