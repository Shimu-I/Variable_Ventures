int findPivot(int array[], int n){
    int s =0;
    int e=  n -1;
    int mid = s + ((e - s)/2);
    while( s < e){
        if( array[0] < array[mid]){
            s = s + 1;
        }
        else {
            e = mid;
           
        }
        mid = s + ((e - s)/2);
    }
    return s;
}