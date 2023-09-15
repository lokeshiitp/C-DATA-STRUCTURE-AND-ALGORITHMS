// Eulid theorem
#include<iostream>
using namespace std;

int HCF(int a, int b){
    int rem;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main(){
    int a, b;
    cin>>a>>b;

    cout<<HCF(a, b)<<endl;

    return 0;
}