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

// 6 8 2 4 1 0 12 5 4 2