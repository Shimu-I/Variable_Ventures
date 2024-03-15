#include <iostream>
using namespace std;

int main(){
/*
 int n;
 cout << "Enter your number: ";
 cin >> n;
 int i = 1;

 while(i < n){
    int j=1;
     while(j < n){
        cout << i;
        j++;
     }
     cout << "\n";
     i++;
 }
*/
/*
char ch;
cout << "Enter a character: ";
cin >> ch;

if('a' <= ch && 'z' >= ch){
    cout << "This is lower case" << endl;
}
else if( 'A' <= ch && 'Z' >= ch){
     cout << "This is upper case" << endl;
}
else if ( 1 < ch - '0' && 10 > ch- '0'){
    cout << "This is numaric" << endl;
}
else{
    cout << "Special character" << endl;
}
*/


//  int n;
//  cout << "Enter your number: ";
//  cin >> n;
//  int i = 1;

//  while(i <= n){
//     if (i % 2 == 0){
//         cout << "Even" << " for " << i << endl;
//     }
//     else {
//         cout << "Odd" << " for " << i << endl;
//     }
//     i++;
//  }


 int f;
 cout << "Enter fahrenheit degree: ";
 cin >> f;

int celcious = (5.0 / 9) * (f - 32) ;
cout << "The cencious value is: " << celcious << endl;
}
