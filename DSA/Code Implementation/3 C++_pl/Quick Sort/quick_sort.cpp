#include <iostream>
#include <algorithm>
using namespace std;

int partition(int a[] , int lb, int ub){

    int pivot = a[ub];
    int start = lb;
    int end = ub;

    while( start <= end){
        while( a[start] <= pivot){
            start++;
        }
        while( a[end] > pivot){
            end--;
        }
        if( start < end){
            swap(a[start], a[end]);
        }
    }
    swap(a[end], a[lb]);
    return end;


}

void quickSort(int a[], int lb, int ub){
    if( lb < ub){
        int loc = partition(a, lb, ub);
        quickSort(a, lb, loc-1);
        quickSort(a, loc+1, ub);
    }


}




void print(int a[], int size){
    for( int i = 0 ; i< size ; i++){
        cout << a[i] << " ";
    }
}

int main(){

    int arr[10]= { 3, 5, 3, 6, 1, 89, 34, 23, 0, 67};
    quickSort(arr, 0, 9 );
    print(arr, 10);



}



/*
7. pivot = 48

keep two pointers a = points to -1 index and b= points to 0th index

18 23 56 26 89 37 28 48

as 18 < pivot => a++ => swap(array[a],array[b]) => b++

18 23 56 26 89 37 28 48

as 23 < pivot => a++ => swap(array[a],array[b]) => b++

18 23 56 26 89 37 28 48

as 56 > pivot => do nothing => b++

18 23 56 26 89 37 28 48

as 26 < pivot => a++ => swap(array[a],array[b]) => b++

18 23 26 56 89 37 28 48

as 89 > pivot => do nothing => b++

18 23 26 56 89 37 28 48

as 37 < pivot => a++ => swap(array[a],array[b]) => b++

18 23 26 37 89 56 28 48

as 28 < pivot => a++ => swap(array[a],array[b]) => b++

18 23 26 37 28 56 89 48

Now, a++ => swap(array[a],pivot)

final array: 18 23 26 37 28 48 56 89

Total numbers of comparisions: 7


*/