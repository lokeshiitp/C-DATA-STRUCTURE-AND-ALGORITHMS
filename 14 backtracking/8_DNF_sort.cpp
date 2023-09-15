// douch national flag   DNF SORT   // only for 0 1 2 elements
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int ar[], int i, int j){
    int temp=ar[i];
    ar[i]=ar[j];
    ar[j]=temp;
}
void DNFsort(int ar[], int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(ar[mid]==0){
            swap(ar, low, mid);
            low++, mid++;
        }else if(ar[mid]==1){
            mid++;
        }else{
            swap(ar, mid, high);
            high--;
        }
    }
}

int main(){
    int n;
    cout<<"size of array: ";
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    DNFsort(ar, n);
    for(int i=0; i<n; i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}