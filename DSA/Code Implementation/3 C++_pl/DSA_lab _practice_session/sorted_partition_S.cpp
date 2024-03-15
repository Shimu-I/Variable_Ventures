#include <iostream>
#include <vector>
using namespace std;

int bubble_sort(vector<int>& arr){
    for(int i = 1 ; i < arr.size() -1; i++){
        for(int j = 0; j < arr.size() - i ; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int selection_sort(vector<int>& arr){
    for( int i = 0 ; i < arr.size() ; i++){
            int min = i;
            
            for( int j = i + 1; j < arr.size() ; j++){
                if(arr[min] > arr[j]){
                    min = j;
                }
            }
            swap(  arr[i], arr[min]);
    }
}

int insertion_sort(vector<int>& arr, int k){
    for( int i = 1 ; i < k ; i++){
        int key = arr[i];
        int j = i - 1;
        while(( j >= 0 ) && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}



void printArray(vector<int>& arr){
    for( int i = 0; i< arr.size() ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArraySorted(vector<int>& arr, int k){
    for( int i = 0; i< k ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
vector<int> array;
int size = 0;
cout << "Enter the size of an array: ";
cin >> size;

cout << "Enter the elements an array: ";
for( int i = 0; i < size ; i++){
    int element;
    cin >> element;
    array.push_back(element);
}

int key = 0;
cout << "Enter the key: ";
cin >> key;
//bubble_sort(array);
//selection_sort(array);
insertion_sort(array, key);
printArraySorted(array, key);

}

/*
5.
Find a sorted partition of length k from an unsorted array of n elements using insertion sort.
Given array: 6 7 5 3 9 1
k = 3
Output: 5, 6, 7
*/