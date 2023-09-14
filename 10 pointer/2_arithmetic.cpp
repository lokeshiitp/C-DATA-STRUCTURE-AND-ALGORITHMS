// Arithmetic operations on pointer
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* aptr=&a;
    cout<<aptr<<endl; // give the address of a
    aptr++;            // increment in address
    cout<<aptr<<endl;       // 4bytes more value from previous value
    aptr++;
    cout<<*aptr<<endl;
    return 0;           // address store in hexadecimal
}