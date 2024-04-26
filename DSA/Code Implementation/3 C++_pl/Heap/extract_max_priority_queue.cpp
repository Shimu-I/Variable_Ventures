// Extract-Max( S ) – Removes and returns the element of S with the largest key


/*

HEAP-MAXIMUM(A)
1 return A[1]

HEAP-EXTRACT-MAX(A)
1 if heap-size[A] < 1
2 then error “heap underflow”
3 max ← A[1]
4 A[1] ← A[heap-size[A]]
5 heap-size[A] ← heap-size[A] – 1
6 MAX-HEAPIFY(A, 1)
7 return max


*/

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void max_heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[largest] < arr[left])
        largest = left;

    if (right < n && arr[largest] < arr[right])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        max_heapify(arr, n, largest);
    }
}

int extractMax(int arr[], int &n) {
    if (n < 1) {
        cout << "Heap underflow" << endl;
        return -1;
    }

    int max = arr[0];

    arr[0] = arr[n - 1];
    n = n - 1;

    max_heapify(arr, n, 0);

    return max;
}

int main() {
    int arr[] = {10, 5, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Max element: " << extractMax(arr, n) << endl;

    return 0;
}

