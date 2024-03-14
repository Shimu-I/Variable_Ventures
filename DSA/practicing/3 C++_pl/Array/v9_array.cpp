//array
/*

#include <iostream>
using namespace std;
int main(){



}

*/


/*
//array input and output
#include <iostream>
using namespace std;

void printArray(int arr[], int n){

cout << "After printing the array is : ";
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " " ;
    }
}
void scanArray(int arr[],int n){
    cout << "--------Taking input for the array--------  " << endl; 
    cout << "Enter the element of an array: ";
     for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }
}
int main(){
    int n;
int array[100]  ;
cout << "Enter the size of an array: ";
cin >> n ;
   
scanArray(array, n);
printArray(array, n);


}

// sample input
// 1 2 3 4 5 6 7 8 9 11
// 

*/



//array max, min, reverse, linear search

#include <iostream>
#include <climits>
using namespace std;

bool linearSearch(int arr[],int n, int key){
    for(int i = 0; i< n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int maxArray(int arr[],int n){

    int maxx = INT_MIN;
    for(int i = 0; i< n; i++){
        // if( arr[i] > maxx){
        //     maxx = arr[i];
        // }
         maxx = max(maxx, arr[i]);
    }
    return maxx;
}

int minArray(int arr[],int n){

    int minn = INT_MAX;
    for(int i = 0; i< n; i++){
        // if( arr[i] < minn){
        //     minn = arr[i];
        // }
        minn = min(minn, arr[i]);
    }
    return minn;
}

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while( start <= end ){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

void printArray(int arr[], int n){

cout << "After printing the array is : ";
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " " ;
    }
}
void scanArray(int arr[],int n){
    cout << "--------Taking input for the array--------  " << endl; 
    cout << "Enter the element of an array: ";
     for (int i = 0; i < n ; i++){
        cin >> arr[i];
    }
}
int main(){
    int n;
int array[100]  ;
cout << "Enter the size of an array: ";
cin >> n ;
   
scanArray(array, n);
int maxValue = maxArray(array, n);
cout << "Max: " << maxValue << endl;

int minValue = minArray(array, n);
cout << "Min: " << minValue << endl;

reverseArray(array, n);
printArray(array, n);

 bool found = linearSearch(array, n, 5);

if( found){
    cout << "\nthe key value is present" << endl;
} else {
    cout << "\nthe key value is not present" << endl;
}


}