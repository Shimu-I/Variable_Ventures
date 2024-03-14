#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int selection_sortMAX(vector<int>& arr){
   
    for( int i = 0 ; i < arr.size() ; i++){
            int max = i;
            
            for( int j = i + 1; j < arr.size() ; j++){
                if(arr[max] > arr[j]){
                   max = j;
                }
            }
            swap(  arr[i], arr[max]);
    }
    int size = arr.size();
    return  arr[size-1];
}



void printArrayMIN(vector<int>& arr){
    for( int i = 0; i< arr.size() ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int selection_sortMIN(vector<int>& arr){
   
    for( int i = 0 ; i < arr.size() ; i++){
            int max = i;
            
            for( int j = i + 1; j < arr.size() ; j++){
                if(arr[max] > arr[j]){
                   max = j;
                }
            }
            swap(  arr[i], arr[max]);
    }
    int size = arr.size();
    return  arr[0];
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
int max_value = selection_sortMAX(array);
cout << "Max: " << max_value << endl;


int min_value = selection_sortMIN(array);
cout << "Min: " << min_value << endl;
printArray(array);

}

// 6 8 2 4 1 12 5 4 2