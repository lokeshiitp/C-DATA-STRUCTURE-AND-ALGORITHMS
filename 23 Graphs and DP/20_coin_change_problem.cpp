// coin change problem
#include<bits/stdc++.h>
using namespace std;

const int N=1e3+2;

int CoinChange(vector<int> &a, int n, int X){
    if(X==0){
        return 1;
    }
    if(X<0){
        return 0;
    }
    if(n<=0){
        return 0;
    }

    return CoinChange(a, n, X-a[n-1])+CoinChange(a, n-1, X);
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int X;
    cin>>X;
    
    cout<<CoinChange(a, n, X);

    return 0;
}