//cycle detection using DSU
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+6;
vector<int> parent(N);
vector<int> sz(N);
void make_set(int v){
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find_set(parent[v]);
}
void Union_set(int a, int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
            parent[b]=a;
            sz[a]+=sz[b];
        }
    }
}
int main(){
    for(int i=0; i<N; i++){
        make_set(i);
    }
    int n, m;
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        edges.push_back({x, y});
    }
    bool cycle=false;
    for(auto i: edges){
        int x=i[0];
        int y=i[1];
        int u=find_set(x);
        int v=find_set(y);
        if(u==v){
            cycle=true;
        }else{
            Union_set(x, y);
        }

    }
    if(cycle){
        cout<<"cycle is present";
    }else{
        cout<<"cycle is not present";
    }

    return 0;
}