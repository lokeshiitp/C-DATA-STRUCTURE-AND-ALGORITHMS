// print all prime number till n using sieve of ertosthenes
#include<iostream>
using namespace std;

void PrimeSieve(int n){
    int prime[100]={0};

    for(int i=2; i<=n; i++){
        if(prime[i]==0){                 // element is unmarked
            for(int j=i*i; j<=n; j+=i){   //j+=i  ==   j=j+i
                prime[j]=1;              // element is marked
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main(){
    int n; 
    cin>>n;

    PrimeSieve(n);

    return 0;
}