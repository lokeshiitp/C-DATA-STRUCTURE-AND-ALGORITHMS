// second smallest element
#include<iostream>
#include<climits>
using namespace std;

void Second_Smallest(int n, int a[]){
    int first, second, i;
    if(n<2){
        cout<<"Invalid Input";
    }
    first=second=INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]<first){
            second=first;
            first=a[i];
        }
        else if(a[i]<second && a[i]!=first){
            second=a[i];
        }
    }
    if(second==INT_MAX){
        cout<<"No second smallest element";
    }else{
        cout<<"\nSEcond smallest element is:"<<second;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Second_Smallest(n, a);

    return 0;
}