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

int selection_sort(vector<int>& arr, int key){
    for( int i = 0 ; i < arr.size() ; i++){
            int min = i;
            
            for( int j = i + 1; j < arr.size() ; j++){
                if(arr[min] > arr[j]){
                    min = j;
                }
            }
            swap(  arr[i], arr[min]);
    }
int count = 0;
for(  int i =0 ; i < arr.size() ; i++){
    if( arr[i] == key){
        count++;
    }
}
return count;
}

int insertion_sort(vector<int>& arr, int key){
    for( int i = 1 ; i < arr.size() ; i++){
        int key = arr[i];
        int j = i - 1;
        while(( j >= 0 ) && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    int count = 0;
for(  int i =0 ; i < arr.size() ; i++){
    if( arr[i] == key){
        count++;
    }
}
return count;
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

int key  = 0;
 cout <<  "Enter the key: ";
 cin >> key;
//bubble_sort(array);
int c1 = selection_sort(array, key);
cout << "Selection Count: " << c1 << endl ;

int c2 = insertion_sort(array, key);
cout << "Insertion Count: " << c2 ;

}

// 6 8 2 4 1 0 12 5 4 2
/*
Find the number of occurrences of a particular element(k) in an array.
Given array: 12 54 23 12 8 1 1 1 43 12
k = 12
Output: 3

*/