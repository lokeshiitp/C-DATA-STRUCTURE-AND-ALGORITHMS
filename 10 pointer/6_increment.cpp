// increment
#include<iostream>
using namespace std;

void increment(int *a){
    *a++;
}

int main(){
    int a=2;
    int *aptr=&a;
    increment(aptr);   // only send the value in function
    cout<<a<<endl;// not increment print only 2
    return 0;       // for increment we send the address 
}