//input a number n and tell whether it is equal to, less then or more then 10
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a numbers:";
    cin>>n;
    if(n>10){
        cout<<"More then 10"<<endl;
    }
    else if(n<10){
        cout<<"Less then 10"<<endl;
    }
    else{
        cout<<"Equal to 10"<<endl;
    }
    
    return 0;
}