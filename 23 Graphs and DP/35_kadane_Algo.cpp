// Maximum subarray sum
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int curr=0, MaxTillnow=0;
    for(int i=0; i<n; i++){
        curr+=a[i];
        MaxTillnow=max(curr, MaxTillnow);
        if(curr<0){
            curr=0;
        }
    }
    cout<<MaxTillnow<<endl;
    return 0;
}