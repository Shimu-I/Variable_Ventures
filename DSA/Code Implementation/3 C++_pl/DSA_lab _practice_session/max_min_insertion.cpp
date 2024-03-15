#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int insertion_sortMAX(vector<int>& arr){
    int size = arr.size();
    for( int i = 1 ; i < arr.size() ; i++){
        
        int key = arr[i];
        int j = i - 1;
        while(( j >= 0 ) && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return arr[size - 1];
}



int insertion_sortMIN(vector<int>& arr){
    int size = arr.size();
    for( int i = 1 ; i < arr.size() ; i++){
        
        int key = arr[i];
        int j = i - 1;
        while(( j >= 0 ) && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return arr[0];
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
int max_value = insertion_sortMAX(array);
cout << "Max: " << max_value << endl;


int min_value = insertion_sortMIN(array);
cout << "Min: " << min_value << endl;
printArray(array);
}

// 6 8 2 4 1 0 12 5 4 2