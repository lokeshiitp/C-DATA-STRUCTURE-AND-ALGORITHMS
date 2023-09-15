//Heap STL
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

// define int log log
#define v vector<int>
#define p pair<int>
#define vi vector<p>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define f first
#define s second
#define setbits(x) builtin_popcount(x)

int main(){
    priority_queue<int, vector<int>> pq;
    
    pq.push(3);
    pq.push(2);
    pq.push(1);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    // mean heap
    priority_queue<int, vector<int>, greater<int>> pqm;
    pqm.push(2);
    pqm.push(3);
    pqm.push(1);

    cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;
    return 0;
}