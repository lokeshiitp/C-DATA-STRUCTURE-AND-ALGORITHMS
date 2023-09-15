// inversion count using merge sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long merge(int ar[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1];
    int b[n2];
    long long inv=0;
    for(int i=0; i<n1; i++){
        a[i]=ar[i+1];
    }
    for(int i=0; i<n2; i++){
        b[i]=ar[mid+1+i];
    }
    int i=0, j=0, k=1;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            ar[k]=a[i];
            k++; i++;
        }else{
            ar[k]=b[j];
            inv+=n1-i;      //important
            k++; j++;
        }
    }
    while(i<n1){
        ar[k]=a[i];
        k++; i++;
    }
    while(j<n2){
        ar[k]=b[j];
        k++; j++;
    }
    return inv;
}

long long mergesort(int ar[], int l, int r){
    long long inv=0;
    if(l<r){
        int mid=(l+r)/2;
        inv+=mergesort(ar, l, mid);
        inv+=mergesort(ar, mid+1, r);
        inv+=merge(ar, l, mid, r);
    }
    return inv;
}

int main(){
    int n; 
    cout<<"enter size :";
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    cout<<mergesort(ar, 0, n-1)<<endl;

    return 0;
}