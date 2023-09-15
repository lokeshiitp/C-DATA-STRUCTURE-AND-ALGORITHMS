// write a program to generate all possible subset of given set
#include<iostream>
using namespace std;

void subsets(int n, int ar[]){
    for(int i=0; i<(1<<n); i++){           // (1<<n)==2 to the power n
        for(int j=0; j<n; j++){
            if(i & (1<<j)){               // to check at ith number jth bit set or not
                cout<<ar[j]<<" ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n; 
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    subsets(n, ar);
    return 0;
}