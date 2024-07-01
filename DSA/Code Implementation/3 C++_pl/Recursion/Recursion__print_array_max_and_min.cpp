#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int arryMax(vector <int> arr ){
    int max = INT_MIN;
    for(int i=0 ; i < arr.size() ; i++){
        if( arr[i] > max ){
            max = arr[i];
        }
    }
    return max;
}

int arryMin(vector <int> arr){
    int min = INT_MAX;
    for(int i=0 ; i < arr.size() ; i++){
        if( arr[i] < min ){
            min = arr[i];
        }
    }
    return min;
}


int main(){
    int n;
    vector <int> arr;

    cout << "Size: ";
    cin >> n;
    cout << "Enter the values: ";

     for( int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        arr.push_back(num);
     }


    cout << endl;
    cout << "Max value: " << arryMax(arr) << endl;
    cout << "Min value: " << arryMin(arr) << endl;
}

/*
input: 1 3 5 7 8
output:
Max: 8
Min: 1


*/

