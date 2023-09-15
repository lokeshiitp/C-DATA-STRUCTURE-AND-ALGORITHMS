//Euler Totient Function
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e5+2, MOD=1e9+7;

int Totient[N];
signed main(){
    for(int i=0; i<N; i++){
        Totient[i]=i;
    }
    for(int i=2; i<N; i++){
        if(Totient[i]==i){
            for(int j=2*i; j<N; j+=i){
                Totient[j]*=i-1;
                Totient[j]/=i;
            }
            Totient[i]=i-1;
        }
    }
    for(int i=2; i<11; i++){
        cout<<Totient[i]<<" ";
    }

    return 0;
}