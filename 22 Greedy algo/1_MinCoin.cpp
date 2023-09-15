// Minimum coin problem
#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int, int>
#define vii vector<pii>


int main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    sort(a.begin(), a.end(), greater<int>());
    int ans=0;
    for(int i=0; i<n; i++){
        ans+=x/a[i];
        x-=x/a[i]*a[i];
    }
    cout<<ans<<endl;

    return 0;
}