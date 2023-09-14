// maximum till ith 
#include<iostream>
using namespace std;

int main(){
    int mx=-1999999;
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    for(int i=0; i<n; i++){
        mx=max(mx, ar[i]);
        cout<<mx<<" ";
    }
    return 0;
}