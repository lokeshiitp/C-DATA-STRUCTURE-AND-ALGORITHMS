// decleration of pointer
// pointer=store the address of given variable
#include<iostream>
using namespace std;

int main(){
    int n=10;
    int* aptr=&n;   // show the address of given verible n
    cout<<*aptr<<endl;   // print given value
    cout<<aptr<<endl;      // print the address of a given number


    return 0;
}