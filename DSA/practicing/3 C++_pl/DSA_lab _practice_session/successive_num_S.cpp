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

int insertion_sort(vector<int>& arr){
    for( int i = 1 ; i < arr.size() ; i++){
        int key = arr[i];
        int j = i - 1;
        while(( j >= 0 ) && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
vector<int> b;
    for( int i = 0 ;  i < arr.size(); i++){
        if( (arr[i] + 1) == arr[i + 1]){
            b.push_back(arr[i]);
            b.push_back(arr[i + 1]);
            
        }
        
    }
}



void printArray(vector<int>& arr){
    for( int i = 0; i< arr.size() ; i++){
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

//bubble_sort(array);
//selection_sort(array);
insertion_sort(array);
printArray(array);

}

/*
7.
Find the number of elements in the longest subset having successive numbers from an unsorted array of numbers.
Example:
a = [4 1 2 7 6 5]
Sorted a = [1, 2, 4, 5, 6, 7]
Output = 4
Explanation: [4, 5, 6, 7] is the longest subset having successive numbers
*/