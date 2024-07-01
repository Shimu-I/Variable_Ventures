/*
q1- reversing an arry
q2- reversing an string (palindeom)

*/

/*
input: 1, 2, 3, 4, 7
output: 7 4 3 2 1

input: 8, 9, 3, 4, 7
output: 7 4 3 9 8

input: madam
output: true
*/



#include <iostream>
using namespace std;

//using two pointer
void reverseNumber1(int arr[], int n ,int l, int r){
    if(l >= r) return ;

    swap( arr[l], arr[r] );
    reverseNumber1(arr, n, l+1, r-1);
}

//using one pointer
void reverseNumber2(int arr[], int n ,int i){
    if(i >= n/2) return ;

    swap( arr[i], arr[n-i-1]);
    reverseNumber2(arr, n, i+1);
}

bool reverseString(string str, int n ,int i){
    if(i >= n/2) return true;
    if( str[i] != str[n-i-1] ) return false;
    return reverseString(str, n, i+1);
}

int main(){
    int arr1[] = {1, 2, 3, 4, 7};
    int arr2[] = {8, 9, 3, 4, 7};
    string str = "madam";


reverseNumber1(arr1, 5, 0, 4);
for( int i=0 ; i<5 ; i++){
    cout << arr1[i] << " ";
}
cout << endl;

reverseNumber2(arr2, 5, 0);
for( int i=0 ; i<5 ; i++){
    cout << arr2[i] << " ";
}
cout << endl;

cout <<  reverseString(str, 5, 0);

}

