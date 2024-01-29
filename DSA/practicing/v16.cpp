#include <iostream>
using namespace std;

void selectionSorting(int arr[],int n){

    for( int i = 0; i < n-1 ; i++){
        int minValue = arr[i];
        for( int j = i+1 ; j < n; j++){
            if(arr[i]> arr[j]){
                minValue = j;
            }
        }
        swap(arr[i], arr[minValue]);
    }
}
void printArray(int arr[], int n){

cout << "After printing the array is : ";
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
int array[ 6] = {2, 5, 12, 1, 60, 3};

selectionSorting(array, 6);
printArray(array, 6);

}