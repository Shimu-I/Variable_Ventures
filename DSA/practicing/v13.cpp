//Q1 :  1st occurance and last occurance
//Q2 : total number of occurance
//Q3 : find peal of a mountain

# include <iostream>

using namespace std;


int binarySearch(int array[], int n, int key){
	int s = 0;
	int e = n-1;
	int mid = s + ((e  - s)/2);
    int ans = -1;

	while(s <= e){
	if(array[mid] == key){ 
        s = mid + 1;
        // e =  mid -1;
        ans = mid;
		
    }
	else if( array[mid] < key){ s = mid + 1;}
	else if( array[mid] > key){ e = mid - 1;}
	 mid = s + ((e  - s)/2);


}

return ans;

}

int mountain(int array[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + ((e -  s)/2);
    while( s < e){
        if( array[mid] < array[mid +1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s + ((e -  s)/2);
    }
    return  s;
}

int main(){
	int array[11] = {3, 7, 9, 11, 11, 13, 15, 15, 15, 15, 20};
    int a[6] = {0, 1 , 3, 15, 7, 2};

//int f = binarySearch(array, 11, 15);
int f = mountain(a, 6);

{cout << "found at index: " << f;} 

 


}