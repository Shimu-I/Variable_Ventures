#include <iostream>
#include <vector>
using namespace std;

int binarySearchFirst(int array[], int target, int n){
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(array[mid] < target){
            low = mid + 1;
        }
        else if(array[mid] == target){
            if(mid == 0 || array[mid - 1] != target){
                return mid;
            }
            else{
                high = mid - 1;
            }
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int binarySearchLast(int array[], int target, int n, int &i){
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(array[mid] < target){
            low = mid + 1;
        }
        else if(array[mid] == target){
            if(mid == n - 1 || array[mid + 1] != target){
                return mid;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            high = mid - 1;
        }
    }
    i = low; // Update the value of i here
    return -1;
}

void countRepetition(int array[], int n){
    int i = 0;
    while(i < n){
        if(array[i] <= 0){
            i++;
            continue;
        }
        int firstO = binarySearchFirst(array, array[i], n);
        int lastO = binarySearchLast(array, array[i], n, i); // Pass i as a reference

        if((firstO != -1) && (lastO != -1) && (firstO != lastO)){
            int count = lastO - firstO + 1;
            cout << "Number: " << array[i] << ", " << "Count: " << count << endl;
            i = lastO + 1;
        }
        if(lastO != -1) i++;
    }
}

int main(){
    

    
  cout << "Enter the number of element: ";
  int num = 0;
  cin >> num;

  int array[num];
  cout << "Enter the array elements: ";
   for( int i = 0 ; i < num ;  i++){
    int e;
     cin >> e;
     array[i] = e;
   }

countRepetition(array, num);
}


/*
Sample Input: -5 -4 -4 -3 -3 -3 0 5 5 5 5 7 8 8 9 10
Output :
Number: 5 Count: 4
Number: 8 Count: 2
*/