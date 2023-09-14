// Largest Elements
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n; 
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int maxno=INT_MIN;
    for(int i=0; i<n; i++){
        maxno=max(ar[i], maxno);
    }
    cout<<"MAXNO:"<<maxno<<endl;

    return 0;
}