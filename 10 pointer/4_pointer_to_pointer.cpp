// pointer to pointer
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p=&a;  // address of a
    cout<<*p<<endl;  // print the value of a
    int **q=&p;      // address of address of a
    cout<<*q<<endl;  // print the address of a
    cout<<**q<<endl;  // print the value of a
    return 0;
}