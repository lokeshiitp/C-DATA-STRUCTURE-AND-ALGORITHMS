// merge k-sorted array using heap
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

// define int log log
#define v vector<int>
#define p pair<int>
#define vi vector<pi>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setbits(x) builtin_popcount(x)


int main(){
    int k;
    cin>>k;

    vector<vector<int>> a(k);
    rep(i, 0, k){
        int size;
        cin>>size;
        a[i]=vector<int>(size);
        rep(j, 0, size){
            cin>>a[i][j];
        }
    }

    vector<int> IDX(k, 0);
    priority_queue<int, vector<int>, greater<int>> pq;
    rep(i, 0, k){
        pq.push((a[i][0], i));

    }
    v ans;

    while(!pq.empty()){
        int x=pq.top();
        pq.pop();

        if(IDX[x.ss]+1)
    }

    return 0;
}