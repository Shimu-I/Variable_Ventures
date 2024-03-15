#include <iostream>
using namespace std;

int selectionSorting(int array[], int n){

    for(int i = 0; i < n-1 ; i++){
        int min = i;
        for( int j = i + 1 ; j < n ; j++){
            if( array[min] > array[j]){
                min = j;
            }
            
        }
        swap(array[i], array[min]);
    }
}

int printArray( int array[], int n){
    for( int i = 0; i < n ; i++){
        cout << array[i] << " " ;
    }
}

int main(){
    int array[6] = {10, 3, 0, 2, 9, 4};

selectionSorting(array, 6);
printArray(array, 6);
}