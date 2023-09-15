// top most k frequent elements in an array
#include<iostream>
#include<vector>
#include<climits>
#include<map>
#include<algorithm>
using namespace std;

#define vi vector<int>
#define pi pair<int>
#define vii vector<pi>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setbits(x) builtin_popcount(x)

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    map<int, int> freq;
    for(int i=0; i<n; i++){
        int presSize=freq.size();
        if(freq[a[i]]==0 && presSize==k){
            break;
        }
        freq[a[i]]++;
    }
    vector<pair<int,int>> ans;
    map<int, int> :: iterator it;
    for(it=freq.begin(); it!=freq.end(); it++){
        if(it->second!=0){

            ans.push_back(it->second, it->first);
        }
    }
    sort(ans.begin(), ans.end(), greater<pair<int>>())
    return 0;
}