// check given number is power of 2 or not
#include<iostream>
using namespace std;

bool Ispowerof2(int n){
    return (n && !(n & n-1));
}

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<Ispowerof2(n)<<endl;

    return 0;
}