// fibonacci series
#include<iostream>
using namespace std;

void fib(int n){          // nothing to be return by function so here we use "void"

    int t1=0;
    int t2=1;
    int nextterm;

    for(int i=1; i<=n; i++){
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;                    //here we does not return anything
}

int main(){
    int n;
    cout<<"Enter Number:";
    cin>>n;

    fib(n);

    return 0;
}