// check given array is shorted or not
#include<iostream>
using namespace std;

bool shorted(int n, int ar[]){
    if(n==1){
        return true;
    }
    bool prevarray=shorted(n-1, ar+1);         //ar+1 pointer going to second index
    return (ar[0]<ar[1] && prevarray);         // here bool function check the condition in return
}

int main(){
    int ar[]={1,3,6,7,9};
    cout<<shorted(5, ar);

    return 0;

}