// maximum subarray sum
#include<iostream>
using namespace std;

int maxsubarraysum(int ar[], int n, int k, int x){
    int sum=0, ans=0;
    for(int i=0; i<k; i++){
        sum+=ar[i];
    }
    if(sum<x){
        ans=sum;
    }
    for(int i=k; i<n; i++){
        sum=sum-ar[i-k];
        sum=sum+ar[i];

        if(sum<x){
            ans=max(ans, sum);
        }
    }
    cout<<ans<<" is the max subarray sum(<x)"<<endl;
}

int main(){
    int ar[]={7,5,4,6,8,9};
    int k=3;
    int x=20;
    int n=6;

    maxsubarraysum(ar, n, k, x);

    return 0;
}