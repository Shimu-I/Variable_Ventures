#include <iostream>
using namespace std;



int partision(int array[], int s, int e){

   int count = 0;
   int pivot = array[s];
   for( int  i = s+1 ; i <= e ; i++){
    if( array[i] <= pivot){
        count++;
    }
   }

int pos = count + s;
   swap(array[s], array[pos]);

int i = s, j = e;
while(i < pos && j > pos ){
    while(array[i] <= pivot){
        i++;
    }
    while(array[j] > pivot){
        j--;
    }
    if( i < pos && j > pos){
        swap(array[i++], array[j--]);
    }
}
return pos;
}

void quickSort(int array[],int s,int e){
    if(s >= e){
        return;
    }

 int p =  partision(array, s, e);
     
     quickSort(array, s, p-1);
     quickSort(array, p+1, e);
     
}


void printArray(int array3[], int n){
    for( int i = 0 ; i < n ; i++){
        cout << array3[i] << " ";
    }
}



int main(){
    int array[11] = { 2, 5, 6, 11, 23, 45,8,9,33,90,101};
    int n =11;

    quickSort(array, 0, n-1);
    printArray(array, 11);

}
