// count sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void countsort(int ar[], int n){
    int k=ar[0];
    for(int i=0; i<n; i++){
        k=max(k, ar[i]);
    }
    int count[10]={0};          //we can't allocated memeory dynamically in count array
    for(int i=0; i<n; i++){
        count[ar[i]]++;
    }
    for(int i=1; i<n; i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1; i>=0; i--){
        output[--count[ar[i]]]=ar[i];      //--predecrimentor
    }

    for(int i=0; i<n; i++){
        ar[i]=output[i];
    }

}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    countsort(ar, n);
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}