//heap sort using min_heapify() function descending order

#include <iostream>
using namespace std;
# include <cmath>

void min_heapify(int arr[],int n, int i){
    int smallest = i;
    int left = ( 2 * i) + 1;
    int right = (2 * i) + 2;


if( left < n && arr[smallest] > arr[left]){
    smallest = left;
}
if( right < n &&  arr[smallest] > arr[right] ){
     smallest = right;
}
if ( smallest != i){
    swap(arr[smallest], arr[i]);
    min_heapify(arr, n, smallest);
}

}

void build_min_heap(int arr[], int n){
    for( int i = (n / 2) - 1 ; i >=0 ; i--){
            cout << "for node:" << arr[i] << endl;
        min_heapify(arr, n, i);
    }
}

void heap_sort(int arr[], int n){
    build_min_heap(arr, n);

    for( int i = n-1; i >= 0 ; i--){
        swap(arr[0], arr[i]);
        min_heapify(arr, i, 0);
    }
}
 void printArray(int arr[], int n){
    for( int i = 0; i < n ; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
 }

int main(){
    //int arr[] = { 16, 4, 10, 14, 7, 9, 3, 2, 8, 1};
    int arr[] = {14, 11, 33, 22, 56, 49, 30, 24, 18, 37};

    int s = sizeof(arr) / sizeof(arr[0]);
   build_min_heap(arr, s);

    printArray(arr, s);
    heap_sort(arr, s);
    printArray(arr, s);



}
