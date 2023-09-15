// inclustion and exclusion
#include<iostream>
using namespace std;

int notcommenfactor(int n, int a, int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    int c=c1+c2-c3;
    
    return c;
}

int main(){
    int n, a, b;
    cin>>n>>a>>b;

    cout<<notcommenfactor(n, a, b)<<endl;

    return 0;
}