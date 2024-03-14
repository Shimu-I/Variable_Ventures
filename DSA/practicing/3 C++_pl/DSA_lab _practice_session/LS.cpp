#include <iostream>
#include <vector>
using namespace std;


int linearSearch(vector<int>& arr, int n){
    int sum = 0;
    for( int  i = 0; i< arr.size(); i++){
        if(arr[i] == n){
                sum = arr[i] + arr[i + 1] + arr[i + 2] + arr[i + 3];
                return sum;
        }
    }
}

int main(){
    vector<int> array;
    int size = 0;
     cout << "Enter the size of array: ";
     cin >> size;

     cout << "Enter the elements of an array: ";
     for(int i = 0; i < size ; i++){
        int num;
        cin >> num;
        array.push_back(num);
     }

     int n;
     cout << "Input: ";
     cin >> n;
     int ans = linearSearch(array, n);
     cout << "The sum is: " << ans << endl;
}



/*

Sample Input: [1 4 5 7 8 -2 6 0 19 -15]
Number: 5
Output : 5 * 4 = 20
*/