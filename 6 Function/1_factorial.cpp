// Factorial of a given number
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;
    int factorial=1;
    for(int i=2; i<=n; i++){
        factorial=factorial*i;    
    }
    cout<<"Factorial:"<<factorial<<endl;
    return 0;
}