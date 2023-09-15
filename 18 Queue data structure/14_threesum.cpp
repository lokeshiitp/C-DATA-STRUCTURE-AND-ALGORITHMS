// 3 sum problem
#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int target; cin>>target;
    vector<int> a(n);
    for(auto &i: a){
        cin>>i;
    }
    sort(a.begin(),a.end());
    bool found=false;
    
    for(int i=0; i<n; i++){
        int lo=i+1, hi=n-1;
        while(lo<hi){
            int current=(a[i]+a[lo]+a[hi]);
            if(current==target){
                found=true;
            }else if(current<target){
                lo++;
            }else{
                hi--;
            }
        }
    }
    if(found=true){
        cout<<"true";
    }else{
        cout<<"false";
    }

    return 0;
}