// Peak element in an array
#include<iostream>
using namespace std;

int peakelement(int ar[], int n, int low, int high){
    int mid=low+(high-low)/2;
    if((mid==0 || ar[mid-1]<ar[mid]) && (mid==n-1 || ar[mid+1]<ar[mid])){
        return mid;
    }else if(mid>0 && ar[mid-1]>ar[mid]){
        return peakelement(ar, n, low, mid-1);
    }else{
        return peakelement(ar, n, mid+1, high);
    }
}

int main(){
    int ar[]={0,6,8,5,7,9};
    int n=6;

    cout<<"peak element index: "<<peakelement(ar, n, 0, n-1)<<endl;

    return 0;
}