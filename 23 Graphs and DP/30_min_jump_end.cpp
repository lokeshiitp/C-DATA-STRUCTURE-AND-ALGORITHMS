// Minimum jumps to reach at the end of an array
#include<bits/stdc++.h>
using namespace std;

const int inf=1e9;

int main(){
    int n; 
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){
        cin>>a[i];
    }
    vector<int> jumps(n, inf);
    if(a[0]==0){
        cout<<inf<<" ";
    }
    jumps[0]=0;
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(i<=j+a[j]){
                jumps[i]=min(jumps[i], jumps[j]+1);
            }
        }
    }
    cout<<jumps[n-1];
    return 0;
}