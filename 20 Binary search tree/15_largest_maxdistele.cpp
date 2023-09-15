// Max elements which are placed at max distance
#include<iostream>
#include<algorithm>
using namespace std;

bool isFeasible(int mid, int ar[], int n, int k){
    int pos=ar[0], elements=1;

    for(int i=1; i<n; i++){
        if(ar[i]-pos>=mid){
            pos=ar[i];
            elements++;
            if(elements==k){
                return true;
            }
        }
    }
    return false;
}

int largestMinDistance(int ar[], int n, int k){
    sort(ar, ar+n);
    int result=-1;
    int left=1;
    int right=ar[n-1];
    
    while(left<right){
        int mid=((left+right)/2);
        if(isFeasible(mid, ar, n, k)){
            result=max(result, mid);
            left=mid+1;
        }else{
            right=mid;
        }
    }
    return result;
}

int main(){
    int ar[]={1, 2, 8, 4, 9};
    int n=5;
    int k=3;

    cout<<"largest min distance: "<<largestMinDistance(ar, n, k)<<endl;

    return 0;
}