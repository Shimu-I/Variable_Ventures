
#include <iostream>
using namespace std;
# include <cmath>

void max_heapify(int arr[],int n, int i){
    int largest = i;
    int left = ( 2 * i) + 1;
    int right = (2 * i) + 2;


if( left < n && arr[largest] < arr[left]){
    largest = left;
}
if( right < n &&  arr[largest] < arr[right] ){
     largest = right;
}
if ( largest != i){
    swap(arr[largest], arr[i]);
    max_heapify(arr, n, largest);
}

}

void build_max_heap(int arr[], int n){
    for( int i = (n / 2) - 1 ; i >=0 ; i--){
            cout << "for node:" << arr[i] << endl;
        max_heapify(arr, n, i);
    }
}
 void printArray(int arr[], int n){
    for( int i = 0; i < n ; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
 }

int main(){
    int arr[] = { 16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    int s = sizeof(arr) / sizeof(arr[0]);
   build_max_heap(arr, s);

    printArray(arr, s);


}
