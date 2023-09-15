// sum of subsequence
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

#define v vector<int>

int main(){
    int n, k;
    cin>>n;
    cin>>k;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    priority_queue<int, v> pq;

    for(int i=0; i<n; i++){
        pq.push(a[i]);
    }
    int sum=0;
    int count=0;

    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
        count++;

        if(sum>=k){
            break;
        }
    }
    if(sum<k){
        cout<<"-1"<<endl;
    }else{
        cout<<count<<endl;
    }
    return 0;
}
