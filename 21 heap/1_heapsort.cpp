// heap intro and heapsort technique
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

// define int log log
#define v vector<int>
#define p pair<int>
#define vi vector<p>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define f first
#define s second
#define setbits(x) builtin_popcount(x)

void heapify(v &a, int n, int i){
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

void heapsort(v &a){
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

    v a(n);

    rep(i, 0, n){
        cin>>a[i];
    }

    heapsort(a);
    rep(i, 0, n){
        cout<<a[i]<<" ";
    }
    return 0;
}