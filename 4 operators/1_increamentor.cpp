// incrementer
#include<iostream>
using namespace std;

int main(){
    int a=1;  
    a=a++ + ++a;
    cout<<a<<endl;

    int b=2;
    b=++b;
    cout<<b<<endl;
    
    return 0;
}