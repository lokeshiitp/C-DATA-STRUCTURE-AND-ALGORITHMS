#include<iostream>
#include<climits>
using namespace std;

void Find_Greater_elements(int n, int a[]){
    for(int i=0; i<n; i++){
        int ctr=0;
        for(int j=0; j<n; j++){
            if(a[j]>a[i]){
                ctr++;
            }
        }
        if(ctr>=2){
                cout<<a[i]<<" ";
            }
    }
}

int main(){
    int  n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    Find_Greater_elements(n, a);
    return 0;
}