// Increase-Key( S, x, k ) – Increases the value of element x’s key to the new value k



/*

HEAP-INCREASE-KEY(A, i, key)
1. If the new key is less than the current key at index i
2.     Then print an error message "new key is smaller than current key"
3. Set A[i] to the new key
4. While i is greater than 1 and the parent of i has a key less than A[i]
5.     Swap A[i] and its parent
6.     Set i to the index of its parent

*/

#include <iostream>
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

int main() {
    int arr[] = {10, 5, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapIncreaseKey(arr, 1, 15);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
