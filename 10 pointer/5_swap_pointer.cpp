//swap two values using pointer
#include<iostream>
using namespace std;

void swap(int *a, int *b){   // here is int pointer
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=2;
    int b=4;

    int *aptr=&a;
    int *bptr=&b;

    swap(aptr, bptr);  // address of a and b
    cout<<a<<" "<<b<<endl;
    return 0;
}