#include <iostream>
using namespace std;

void  rev(int arr[], int i, int n){
   if( i >= n/2 ){
    return;
   }
   swap(arr[i], arr[n-i-1]);
   rev(arr, i+1, n);
}

int main(){

    int arr[] = { 1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

rev(arr, 0, size);

cout<< "Reverse: " ;
for( int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
}
}
