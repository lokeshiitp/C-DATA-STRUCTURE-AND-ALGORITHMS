// sum of n numbers using recursion
#include<iostream>
using namespace std;

int Sum(int n){
    if(n==0){         //base condition
        return 0;
    }

    int prevsum= Sum(n-1);       // recursion is nothing but call the function in function
    return n+prevsum;
}

int main(){
    int n;
    cin>>n;

    cout<<Sum(n)<<endl;
    return 0;
}