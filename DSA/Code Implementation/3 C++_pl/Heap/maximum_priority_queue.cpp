// Maximum( S ) – Returns, but does not remove, the element of S with the largest key


#include <iostream>
using namespace std;

int maximum(int arr[]) {
    return arr[0];  // The maximum element is at the root of the max heap
}

int main() {
    int arr[] = {10, 5, 3, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum element: " << maximum(arr) << endl;

    return 0;
}
