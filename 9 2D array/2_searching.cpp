// searching an element in a matrix
#include<iostream>
using namespace std;

int main(){
    int n, m, x;
    cout<<"Enter rows:";
    cin>>n;
    cout<<"Enter columns:";
    cin>>m;
    int ar[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>ar[i][j];
        }
    }
    cout<<"Matris is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }
    // for searching an element
    cout<<"Enter searching element:";
    cin>>x;
    bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ar[i][j]==x){
                cout<<i<<j<<"\n"; 
                flag=true; 
            }
        }
    }
    if(flag){
        cout<<"Element is found\n";
    }else{
        cout<<"Element not found\n";
    }
    
    return 0;
}