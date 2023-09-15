// coin change problem using dp table
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int, int>
#define vii vector<pii>

const int N=1e3+2;


int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    
    vvi dp(n+1, vi(x+1, 0));

    dp[0][0]=1;
    for(int i=1; i<n+1; i++){
        for(int j=0; j<x+1; j++){
            if(j-a[i]>=0){
                dp[i][j]+=dp[j-a[i]][j];
            }
            else{
                dp[i][j]+=dp[i-1][j];
            }
        }
    }

    cout<<dp[n][x]<<endl;
    
    return 0;
}
