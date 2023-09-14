// Factorial of a number using function
#include<iostream>
using namespace std;
 
int fact(int n){                    // function for factorial 
    int fact=1;
    for(int i=2; i<=n; i++){
        fact*=i;                   // Assignment operator
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter num:";
    cin>>n;

    int ans=fact(n);
    cout<<"Factorial:"<<ans;

    return 0;
}