# include <iostream>
using namespace std;

int squareroot(int n){
   
    int s = 0;
    int e = n;
    long long int mid = s + ((e - s)/2);
    int a;
    

    while( s <= e){
        long long int sq = mid * mid;
        if( sq > n){
            e = mid - 1;
        }
        else if( sq < n){
             a=s;
            s = mid + 1;
            
        }
        else if( sq == n){
            return mid;
        }
        mid = s + ((e - s)/2);
    }
    
    return a;

/*
 int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
*/


}


double doublePart(int n, int presion, int value){
    double num = 1;
    double ans = value;

    for( int i = 0 ; i < presion ; i++){
        num = num / 10;
        for( double j = ans ; j * j < n ; j = j + num){
            ans = j;
        }

    }

return ans;


}

/*

*/


int binarysSearch(int arr[], int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}


int findPivot(int array[], int n){
    int s =0;
    int e=  n -1;
    int mid = s + ((e - s)/2);
   
    while( s < e){
        if( array[0] <= array[mid]){
            s = s + 1;
            
        }
        else if(array[mid-1] < array[mid] && array[mid+1] < array[mid]){
            e = mid;
           
        }
        mid = s + ((e - s)/2);
    }
    return s;
}

int findPosition(int array[], int n, int k){

    int p = findPivot(array, n);

    if( array[n-1] >= k && array[p] <= k){
        return binarysSearch(array, p, n-1, k);
    }
    else{
        return binarysSearch(array, 0, p, k);
    }

}


int main(){
int array[7] = { 3, 8, 10, 17, 20,2,4};

int f = findPivot(array,7);
cout << "Ans: " << f << endl;

    /*  
      int n;
    cout << "Enter the value: " << endl;
    cin >> n ;

int value = squareroot( n);
cout << "Value: " << value << endl; 
double d =  doublePart(n, 3, value);
cout << "Complete answe: " << d << endl;
    
    */





}