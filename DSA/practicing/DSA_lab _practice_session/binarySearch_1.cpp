
#include <iostream>
#include <vector>


int findingMissingNumber(std::vector<int>& arr){

  int s = 0;
  int e = arr.size() -1;

  int mid = s + (e - s)/ 2;
  while( s <= e){
    if(arr[mid] == mid){
      s =  mid + 1;
    }
    else{
        e = mid -1;
    }
    mid = s + (e - s)/ 2;
  }

  return s;
}


int main(){
 
  std::vector<int> array;
  int  ele = 0;
  std::cout << "Enter the size: ";
  std::cin >> ele;
  std::cout << "Enter the element: " ;
  for( int i = 0; i <ele ; i++ ){
      int e;
      std::cin >> e;
    array.push_back(e);
  }
  

  
  int number = findingMissingNumber(array);
  std::cout << "Number: " << number ;

}


/*

Given a sorted array of non-negative distinct integers, find the smallest
missing non-negative element in it using binary search.
Input: [0 1 2 3 4 6 9 11 15]
Output: The smallest missing element is 5

  */



/*

#include <iostream>
#include <vector>

int findSmallestMissing(std::vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
       int mid = (low + high) / 2;

if (arr[mid] == mid) {
    low = mid + 1;
} else if (arr[mid] > mid) {
    high = mid - 1; // change this line
} else {
    // arr[mid] < mid
    low = mid + 1;
}
    }

    return low;
}

int main() {
    std::vector<int> arr = {0, 1, 2, 3, 4, 6, 9, 11, 15};
    std::cout << findSmallestMissing(arr) << std::endl;  // Output: 5

    return 0;
}

*/