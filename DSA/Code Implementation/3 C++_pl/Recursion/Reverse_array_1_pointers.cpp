#include <iostream>
using namespace std;

void  rev(int arr[], int i, int n){
   if( i == n ){

    return;
   }
   rev(arr, i+1, n);
   cout << arr[i] << " ";
}

int main(){

    int arr[] = { 1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

cout<< "Reverse: " ;
rev(arr, 0, size);


}

