#include <iostream>
using namespace std;

void BubbleSorting(int arr[],int n){

    for( int i = 0; i < n-1 ; i++){
        
        for( int j = 0 ; j < n-i-1; j++){
            if(arr[j]> arr[j+1]){
                swap( arr[j], arr[j + 1]);
            }
        }
       
    }
}
void printArray(int arr[], int n){

cout << "After printing the array is : ";
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " " ;
    }
}
int main(){
int array[ 6] = {2, 75, 12, 1, 60, 3};

BubbleSorting(array, 6);
printArray(array, 6);

}