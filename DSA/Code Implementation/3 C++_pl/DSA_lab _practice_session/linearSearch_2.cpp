#include <iostream>
using namespace std;




int main(){
  int n =0;
  cout << "Enter the number of elements: " ;
  cin >> n;
  
  int* arr = new int[n];
  cout << "Enter the elements: " ;
  for(int i= 0 ; i < n ; i++){
    int element;
    cin >> element;
    arr[i] = element;
  }
  
  int number = 0;
  cout << "Input the number: " ;
  cin >> number;

int sum = 0;
 for(int i= 0 ; i < n ; i++){

    if(arr[i] ==  number){
        sum = arr[i] + arr[i + 1] + arr[i + 2 ] + arr[i + 3 ] ;
        break;
    }

  }

cout << "The sum value is: " << sum << endl;


  
}


/*
Sample Input: 1 4 5 7 8 -2 6 0 19 -15
Number: 5
Output : 5 + 7 + 8 - 2 = 18
*/