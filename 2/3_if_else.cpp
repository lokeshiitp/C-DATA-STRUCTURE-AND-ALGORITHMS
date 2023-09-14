// Prime and Non prime Numbers
#include<iostream>
using namespace std;

int main(){
    int n;
    int div=2;
    cin>>n;
    if(n%2==0){
        cout<<"Non Prime\n";
    }else{
        div=div++;
        cout<<"Prime";
    }

    return 0;
}