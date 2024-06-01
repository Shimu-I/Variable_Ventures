#include <iostream>
using namespace std;

void  rev(int arr[], int l, int r){
   if( l >= r){
    return;
   }
   swap(arr[l], arr[r]);
   rev(arr, l+1, r-1);
}

int main(){

    int arr[] = { 1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

rev(arr, 0, size - 1);

cout<< "Reverse: " ;
for( int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
}
}

