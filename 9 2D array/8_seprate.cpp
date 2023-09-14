// seperate of all letters
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ar[n+1];    // in char array space is required
     for(char i=0; i<n+1; i++){
        cin>>ar[i];
    }
    for(char i=0; i<n+1; i++){
        cout<<ar[i]<<endl;
    }
    return 0;
}