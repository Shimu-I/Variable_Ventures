#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void is(int array[], int n){
    for(int i = 1 ; i< n ; i++){
        int temp = array[i];
        int j = i- 1;
        while( j >= 0 && array[j] > temp){
            
                array[j+1] = array[j];
            j--;
             }
            array[j+1] = temp;
       
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    is(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
