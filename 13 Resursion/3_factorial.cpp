// factorial of a number using recursion 
#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){            //base condition
        return 1;
    }
    int prevfactorial=factorial(n-1);
    return n*prevfactorial;
}

int main(){
    int n;
    cin>>n;

    cout<<factorial(n)<<endl;

    return 0;
}