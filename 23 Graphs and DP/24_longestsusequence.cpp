// longest increasing subsequence of an array
//mamoization method
#include<bits/stdc++.h>
using namespace std;

const int N=1e3+2;
int dp[N];

int lis(vector<int> &a, int n){
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=1; // single element also a lis

    for(int i=0; i<n; i++){
        if(a[n]>a[i]){
            dp[n]=max(dp[n], 1+lis(a, i));
        }
    }
    return dp[n];
}

int main(){
    for(int i=0; i<N; i++){
        dp[i]=-1;
    }
    int n; 
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    cout<<lis(a, n-1)<<endl;
    return 0;
}