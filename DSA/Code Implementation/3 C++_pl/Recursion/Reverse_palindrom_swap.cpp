#include <iostream>
using namespace std;

bool  rev(string arr, int i, int n){
   if( i >= n/2 ){
    return true;
   }
   if( arr[i] != arr[n-i-1]){
    return false;
   }
   return rev(arr, i+ 1, n);
}

int main(){

string s;

cout << "Enter: ";
getline(cin, s);

int size = s.length();
cout <<rev(s, 0, size)<< endl;

}

