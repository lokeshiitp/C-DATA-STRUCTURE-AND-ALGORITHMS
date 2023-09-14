//  find nCr using function
#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=2; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n, r;
    cin>>n>>r;
    int combination=fact(n)/(fact(r)*fact(n-r));    // for finding nCr
    int permutation=fact(n)/fact(n-r);
    cout<<"combination:"<<combination<<endl;
    cout<<"permutation:"<<permutation<<endl;

    return 0;

}