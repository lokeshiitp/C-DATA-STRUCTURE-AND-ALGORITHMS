//Bellman ford algorithm
#include<bits/stdc++.h>
using namespace std;
const int inf=1e9;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> edges;
    for(int i=0; i<m; i++){
        int u, v, w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    int source;
    cin>>source;
    vector<int> dist(n, inf);
    dist[source]=0;
    for(int it=0; it<n-1; it++){
        for(auto i: edges){
            int u=i[0];
            int v=i[1];
            int w=i[2];
            dist[v]=min(dist[v], w+dist[u]);
        }
    }
    for(int a: dist){
        cout<<a<<" ";
    }cout<<"\n";
    return 0;
}