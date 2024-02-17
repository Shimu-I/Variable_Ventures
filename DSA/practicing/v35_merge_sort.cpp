#include <iostream>
using namespace std;
/*
void mergeArray(int array1[], int s, int array2[], int e, int array3[]){
int i=0, j=0, k=0;

while( i < n && j < m){
 if( array1[i] < array2[j]){
        array3[k++] = array1[i++];
    }
    else if( array1[i] > array2[j]){
        array3[k++] = array2[j++];
    }

}

    //copying 1st array
    while(i < n){
        array3[k++] = array1[i++];
    }

    //coping 2nd array
    while(j < n){
        array3[k++] = array2[j++];
    }

}

*/


void mergeArray(int array[], int s, int e){

    int mid = s + ((e-s)/2);

     int len1 = mid - s + 1;
     int len2 = e - mid ;

   int array1[len1] ,array2[len2];


    int k  = s;
     for(int a = 0 ; a < len1 ; a++){
            array1[a] = array[k++];
    }

     k  =  mid + 1;
     for(int b = 0 ; b < len2 ; b++){
          array2[b] = array[k++];
    }

//merge 2 sorted
    int i=0, j = 0;
    k = s;
    while( i < len1 && j < len2){
        if(array1[i] < array2[j]){
            array[k++] = array1[i++];
        }
        else{
            array[k++] = array2[j++];
        }

     }


//copy to the existing array
      while(i < len1){
        array[k++] = array1[i++];
     }

      while(j < len2){
        array[k++] = array2[j++];
     }

}

void mergeSort(int array[],int s,int e){
    if(s >= e){
        return;
    }

    int mid = s + ((e-s)/2);
     
     mergeSort(array, s, mid);
     mergeSort(array, mid+1, e);
     mergeArray(array, s, e);
}


void printArray(int array3[], int n){
    for( int i = 0 ; i < n ; i++){
        cout << array3[i] << " ";
    }
}



int main(){
    int array[11] = { 2, 5, 6, 11, 23, 45,8,9,33,90,101};
    int n =11;

    mergeSort(array, 0, n-1);
    printArray(array, 11);

}
