#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> list1 ;
cout << "INPUT: ";
    for( int i = 0 ; i < 5 ; i++){
            int x;
            cin >> x;
            list1.push_back(x);
    }
    for( int i = 0 ; i < list1.size(); i++){
        cout << "[ " << i << " ]" << list1[i] << endl;
    }

    int d = 2;
    list1.erase(list1.begin()+ d);

    for( int x : list1){
        cout  << x << " ";
    }

}


/*
input : 11 753 2 8 91

output:
[0] 11
[1] 753
[2] 2
[3] 8
[4] 91
11
753
8
91
*/
