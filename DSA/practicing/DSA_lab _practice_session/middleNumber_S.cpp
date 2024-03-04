#include <iostream>
#include <vector>
using namespace std;



int selection_sort(vector<int>& arr){
    int size = arr.size();
    for( int i = 0 ; i < arr.size() ; i++){
            int min = i;
            
            for( int j = i + 1; j < arr.size() ; j++){
                if(arr[min] > arr[j]){
                    min = j;
                }
            }
            swap(  arr[i], arr[min]);
    }
    return size /2;
}

int insertion_sort(vector<int>& arr){
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
    int mid = (0 + size)/2;
 return mid;
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
int mid2 = selection_sort(array);
cout << "Selection mid: " << mid2 << endl;
int mid1 = insertion_sort(array);
cout << "Insertion mid: " << mid1 << endl;
 printArray(array);

}

// 6 8 2 4 1 0 12 5 4 2
//1 3 2 0 10 7 4 8 9 6 5