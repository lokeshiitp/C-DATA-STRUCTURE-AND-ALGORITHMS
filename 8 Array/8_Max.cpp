// Maximum element of given array
#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxn=INT_MIN;
    for(int i=0; i<n; i++){
       //if(arr[i]>max){
       //     max=arr[i];
        //}
        maxn=max(arr[i], maxn);
    }
    cout<<"Max element of array: "<<maxn;    
    return 0;
}