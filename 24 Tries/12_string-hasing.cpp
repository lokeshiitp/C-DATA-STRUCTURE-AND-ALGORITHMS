// find the number of unique string in the given strings
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2, MOD=1e9+7;
int p=31;
vector<long long> power(N);

long long calculate_hash(string s){
    long long hash=0;
    for(int i=0; i<s.size(); i++){
        hash=((hash+s[i]-'a'+1)*power[i])%MOD;
    }
    return hash;
}

int main(){
    power[0]=1;
    for(int i=1; i<N; i++){
        power[i]=(power[i-1]*p)%MOD;
    }
    vector<string> s= {"aa", "ab", "aa", "b", "cc", "ab"};
    vector<int> hashes;
    for(auto w: s){
        hashes.push_back(calculate_hash(w));
    }
    sort(hashes.begin(), hashes.end());
    int dist=0;
    for(int i=0; i<hashes.size(); i++){
        if(i==0 or hashes[i]!=hashes[i-1]){
            dist++;
        }
    }
    cout<<dist<<"\n";
   /*vector<string> s= {"aa", "ab", "aa", "b", "cc", "ab"};
    sort(s.begin(), s.end());
    int dist=0;
    for(int i=0; i<s.size(); i++){
        if(i==0 or s[i]!=s[i-1]){
            dist++;
        }
    }
    cout<<dist<<"\n";*/

    return 0;
}