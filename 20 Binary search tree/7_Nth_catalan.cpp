// find Nth catalan
#include<iostream>
using namespace std;

int catalan(int n){
    if(n<=1){
        return 1;
    }
    int res=0;
    for(int i=0; i<=n-1; i++){
        res+=catalan(i)*catalan(n-i-1);
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    for(int i=0; i<n; i++){   //very bad time complexility
        cout<<catalan(i)<<" ";
    }cout<<endl;

    return 0;
}