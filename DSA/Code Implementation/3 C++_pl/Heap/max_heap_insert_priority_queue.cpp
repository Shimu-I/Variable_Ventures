// Insert( S, x ) – Inserts element x into set S, according to its priority



/*
MAX-HEAP-INSERT(A, key)
1. Increase the size of the heap by 1
2. Set the last element of array A to negative infinity
3. Call HEAP-INCREASE-KEY with A, the new size of A, and key

*/

#include <iostream>
#include <limits>
#include <climits>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int parent(int i) {
    return (i - 1) / 2;
}

void heapIncreaseKey(int arr[], int i, int key) {
    if (key < arr[i]) {
        cout << "Error: new key is smaller than current key" << endl;
        return;
    }

    arr[i] = key;

    while (i > 0 && arr[parent(i)] < arr[i]) {
        swap(arr[i], arr[parent(i)]);
        i = parent(i);
    }
}

void maxHeapInsert(int arr[], int &n, int key) {
    // Increase the size of the heap
    n = n + 1;

    // Set the last element to the smallest possible value
    arr[n - 1] = INT_MIN;

    // Increase the key of the last element to the desired value
    heapIncreaseKey(arr, n - 1, key);
}


int main() {
    int arr[6] = {10, 5, 3, 2, 4};
    int n = 5;

    maxHeapInsert(arr, n, 15);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

