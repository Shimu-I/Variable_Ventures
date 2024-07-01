#include <iostream>
using namespace std;

//v_1 p_1
void f(){
    cout << "1 " ;
    f();
}

//v_1 p_2
int count = 0;
void f1(){

    if( count == 3 ){
            return;
    }
    cout << count << " ";
    count++;
    f1();
}

int main(){
    //f();
    f1();

}
