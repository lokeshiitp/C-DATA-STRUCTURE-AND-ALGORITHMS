#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int c[], int n, int m){
    int i=0, j=0, k=0;
    while(i<n){
            c[k++]=a[i++];
    }
    while(j<m){
        c[k++]=b[j++];
    }
}

int main(){
    int n, m, p;
    cout<<"enter size of array a: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"enter size of array b: ";
    cin>>m;
    p=n+m;
    int b[m];
    for(int j=0; j<m; j++){
        cin>>b[j];
    }
    cout<<"size of array c: "<<p<<endl;
    int c[p];
    merge(a, b, c, n, m);
    for(int i=0; i<(p); i++){ 
        cout<<c[i]<<" ";
    }
    
    return 0;
}