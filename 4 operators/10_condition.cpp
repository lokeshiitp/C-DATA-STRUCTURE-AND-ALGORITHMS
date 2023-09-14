// conditional operator (ternary operator)
#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two Numbers: "<<endl;
    cin>>a>>b;
    (a>b)? cout<<a-b<<endl : cout<<b-a<<endl;
    return 0;
}