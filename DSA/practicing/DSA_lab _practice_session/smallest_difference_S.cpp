#include <iostream>
#include <vector>
#include <climits>
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
       int Tdiff = INT_MAX;
    for( int i= 0; i < arr.size() - 1 ; i++){
        int diff  = arr[i+1] - arr[i];
        if(diff < Tdiff){
            Tdiff = diff;
        }
    }

 return Tdiff;
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
    
    
    int Tdiff = INT_MAX;
    for( int i= 0; i < arr.size() - 1 ; i++){
        int diff  = arr[i+1] - arr[i];
        if(diff < Tdiff){
            Tdiff = diff;
        }
    }

 return Tdiff;
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
int diff1 = selection_sort(array);
cout << "Selection difference: " << diff1 << endl;
int diff2 = insertion_sort(array);
cout << "Insertion difference: " << diff2 << endl;
 printArray(array);

}


// 1 5 3 19 18 25