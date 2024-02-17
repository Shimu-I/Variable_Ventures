/*
#include <iostream>
using namespace std;
int main(){



}
*/



/*
//practice problem
//Q1

Q1
n=3

 1 2 3
 1 2 3
 1 2 3
 and
 3 2 1
 3 2 1
 3 2 1
*/

#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;

 cout << " Enter a number: ";
 cin >> n;

//  while( r <= n){ 
//     int c = 1;
//     while( c <= n){
   
//         cout << c<<" ";
//         c++;
        
//     }
//      cout<<endl;
//     r++;
//     }

 while( r <= n){ 
    int c = 1;
    while( c <= n){
   
        cout << n - c + 1<<" ";
        c++;
        
    }
     cout<<endl;
    r++;
    }


}


/*
//practice problem
//Q2

Q2
n=3

9 8 7
6 5 4
3 2 1


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;

 cout << " Enter a number: ";
 cin >> n;
 int count = n * n;
 while( r <= n){ 
    int c = 1;
    while( c <= n){
   
        cout << count<<" ";
        c++;
        count--;
    }
     cout<<endl;
    r++;

    }
}
*/

/*
//practice problem
//Q3

Q3
n=4

*
* *
* * *
* * * *


#include <iostream>
using namespace std;
int main(){

int n, r = 1 , count = 1;

 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 
    int c = 1;
    while( c <= r){
        cout << "*" <<" ";
   
        c++;
    }
     cout<<endl;
    r++;
    }
}
*/


/*
//practice problem
//Q4

Q4
n=5

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
and 
1 
2 3
4 5 6
7 8 9 10


#include <iostream>
using namespace std;
int main(){

int n, r = 1 , count = 1;

 cout << " Enter a number: ";
 cin >> n;

//  while( r <= n){ 
//     int c = 1;
//     while( c <= r){
//         cout << count <<" ";
//     count++;
//         c++;
//     }
//      cout<<endl;
//     r++;
//     }


 while( r <= n){ 
    int c = 1;
    while( c <= r){
        cout << r <<" ";
   
        c++;
    }
     cout<<endl;
    r++;
    }
}
*/


/*
//practice problem
//Q5

Q5
n=5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;

 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;
 
    while( c <= r){
        
        cout << r +c -1 <<" ";
    
        c++;
      
        
    }
     cout<<endl;
    r++;

    }
   
}
*/



/*
//practice problem
//Q6

Q6
n=3

1
2 1
3 2 1


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;

 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1, s;
    s = r;
    while( c <= r){
        
        cout << s <<" ";
        s--;
        c++;
      
        
    }
     cout<<endl;
    r++;

    }
   
}
  */


/*
//practice problem
//Q7

Q7
n=3

A A A
B B B
C C C


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
char ch = 'A';
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;

    while( c <= n){
        cout << ch <<" ";
        c++;
      
        
    }
     cout<<endl;
    r++;
  ch++;
    }
   
}
*/


/*
//practice problem
//Q8

Q8
n=3

A B C
A B C
A B C



#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;

 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;
char ch = 'A';
    while( c <= n){
        cout << ch <<" ";
        c++;
        ch++;
        
    }
     cout<<endl;
    r++;

    }
   
}
*/


/*
//practice problem
//Q9

Q9
n=3

A B C
D E F
G H I


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
char ch = 'A';
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;

    while( c <= n){
        cout << ch <<" ";
        c++;
        ch++;
        
    }
     cout<<endl;
    r++;

    }
   
}
*/

/*
//practice problem
//Q10

Q10
n=3

A B C
B C D
E F G


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
char ch = 'A';
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;

    while( c <= n){
        cout << ch <<" ";
        c++;
        ch++;
        
    }
     cout<<endl;
    r++;
    ch = ch - 2;
    }
   
}
*/


/*
//practice problem
//Q11

Q11
n=4

A
B B
C C C 
D D D D


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
char ch;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;
    ch ='A' + r - 1;
    while( c <= r){
        cout << ch <<" ";
        c++;
        
        
    }
    ch++;
     cout<<endl;
    r++;
    }
   
}
*/

/*
//practice problem
//Q12

Q12
n=4

A
B C
D E F
G H I J


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
char ch = 'A';
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;

    while( c <= r){
        cout << ch <<" ";
        c++;
        ch++;
        
    }
     cout<<endl;
    r++;
    }
   
}


*/


/*
//practice problem
//Q13

Q13
n=4

A
B C
C D E
D E F G


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
char ch;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;
    ch = 'A' + (r - 1);
    while( c <= r){
        cout << ch <<" ";
        c++;
        ch++;
        
    }
     cout<<endl;
    r++;
    }
   
}
*/


/*
//practice problem
//Q14

Q14
n=4

D
C D
B C D
A B C D


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
char ch;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  
    int c = 1;
    ch = 'A' + (n - r);
    while( c <= r){
        cout << ch <<" ";
        c++;
        ch++;
        
    }
     cout<<endl;
    r++;
    }
   
}
*/


/*
//practice problem
//Q15

Q15
n=4

      *
    * *
  * * *
* * * *

#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 

  int s = 1;
    while(s <= ( n - r)){
        cout<< " "<< " ";
        s++;
    }
    int c = 1;
    while( c <= r){
        cout << "*" <<" ";
        c++;
        
    }
     cout<<endl;
    r++;
    }
   
}
*/



/*
//practice problem
//Q16

Q16
n=4
* * * *
* * *
* *
*


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 
    
    int c = 1;
    while( c <= (n + 1 - r)){
        cout << "*" <<" ";
        c++;
        
    }
 
    cout<<endl;
    r++;
 }
}
*/


/*
//practice problem
//Q17

Q17
n=4
* * * *
  * * *
    * *
      *


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 
    int s = 1;
    while(s <= (r - 1)){
        cout<< " "<< " ";
        s++;
    }
    int c = 1;
    while( c <= (n + 1 - r)){
        cout << "*" <<" ";
        c++;
        
    }
 
    cout<<endl;
    r++;
 }
}
*/


/*
//practice problem
//Q18

Q18
n=4
1 1 1 1
  2 2 2 
    3 3
      4

#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 
    int s = 1;
    while(s <= (r - 1)){
        cout<< " "<< " ";
        s++;
    }
    int c = 1;
    while( c <= (n + 1 - r)){
        cout << r  <<" ";
        c++;
        
    }
 
    cout<<endl;
    r++;
 }
}
*/


/*
//practice problem
//Q19
/*
Q19
n=4
      1
    2 2 
  3 3 3
4 4 4 4 


#include <iostream>
using namespace std;
int main(){

int n, r = 1 ;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 
    int s = 1;
    while(s <= (n + 1 - r )){
        cout<< " "<< " ";
        s++;
    }
    int c = 1;
    while( c <= r){
        cout << r  <<" ";
        c++;
        
    }
 
    cout<<endl;
    r++;
 }
}
*/


/*
//practice problem
//Q20
/*
Q20
n=4
      1
    3 2 
  4 5 6
7 8 9 10 


#include <iostream>
using namespace std;
int main(){

int n, r = 1, count = 1;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){ 
    int s = 1;
    while(s <= (n + 1 - r )){
        cout<< " "<< " ";
        s++;
    }
    int c = 1;
    while( c <= r){
        cout << count <<" ";
        c++;
        count++;
    }
 
    cout<<endl;
    r++;
 }
}
*/

//practice problem
//Q21
/*
Q21
n=4
      1
    1 2 1
  1 2 3 4 1
1 2 3 4 3 2 1


#include <iostream>
using namespace std;
int main(){

int n, r = 1;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){
    int c = 1;
    while( c <= n - r){
        cout << " " <<" ";
        c++;
    }
    int s = 1;
    while(s <= r ){
        cout<< s<< " ";
        s++;
    }
    int k = 1, p;
    p = r - 1;
    while( k <=  (r - 1)){
        
        cout<< p <<" ";
        k++;
        p--;
    }
    cout<<endl;
    r++;
 }
}
*/


//practice problem
//Q22
/*
Q22
n=5
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1 

#include <iostream>
using namespace std;
int main(){

int n, r = 1;
 cout << " Enter a number: ";
 cin >> n;

 while( r <= n){
    int c = 1;
    while( c <= n - (r - 1)){
        cout << c <<" ";
        c++;
    }
    int s = 1;
    while(s <= (r * 2 - 2)){
        cout<< "*"<< " ";
        s++;
    }
    int k = 1, p;
    p = n - (r - 1);

    while( k <= (n- (r - 1))){
        cout<< p <<" ";
        p--;
        k++;
    }
    cout<<endl;
    r++;
 }
}
*/