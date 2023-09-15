// heapsort and heap intro
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void heapify(vector<int> &a, int n, int i){
    int MaxIdx=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[MaxIdx]){
        MaxIdx=l;
    }
    if(r<n && a[r]>a[MaxIdx]){
        MaxIdx=r;
    }
    if(MaxIdx!=i){
        swap(a[i], a[MaxIdx]);
        heapify(a, n, MaxIdx);
    }

}


void Heapsort(vector<int> &a){
    int n=a.size();
    for(int i=n/2-1; i>=0; i--){
        heapify(a, n, i);
    }
    for(int i=n-1; i>0; i--){
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Heapsort(a);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}