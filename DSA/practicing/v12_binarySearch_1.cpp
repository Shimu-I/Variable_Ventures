
/*
#include <iostream>

using namespace std;


int binarySearch(int arr[], int size,int  key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while (start <= end){
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }

    return -1;
}


int main(){

int even [7] = {2 ,4 ,6 ,8 ,12 ,44 ,88};
int odd [5] = {1 ,3 ,7 ,97 ,55};

int even_number = binarySearch(even, 7, 44);
cout << "binary search for even number: " << even_number << endl; 

int odd_number = binarySearch(odd, 5, 97);
cout << "binary search for odd number: " << odd_number << endl; 

}


*/
#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int start = 0;
    int end = n-1;
    int mid = start + ((end - start)/2);

    while( start <= end){

        if ( key == arr[mid]){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if (key < arr[mid]){
           end = mid -1;
        }
         mid = start + ((end - start)/2);
    }
    return -1;
}

int main(){

    cout << "hey" << endl;
int array[5] = {3, 23, 44, 98, 98};
int found = binarySearch(array, 5, 98);
cout << "KEY: " << found ;


}