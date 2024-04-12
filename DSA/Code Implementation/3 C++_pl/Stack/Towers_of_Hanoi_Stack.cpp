#include <iostream>
using namespace std;
void hanoi(int n, char origin, char destination, char mid) {
   if(n == 1){
      cout<<"Move disk 1 origin: "<<origin<<" destination: "<<destination<<endl;
   }
   else{
      hanoi(n-1, origin, mid, destination);
      cout<<"Move disk "<<n<<" origin: "<<origin<<" destination: "<<destination<<endl;
      hanoi(n-1, mid, destination, origin);
   }
}
int main() {
   int n = 3;
   char origin = 'A';
   char destination = 'B';
   char mid = 'C';
   //calling hanoi() method
   hanoi(n, origin , mid, destination);
}
