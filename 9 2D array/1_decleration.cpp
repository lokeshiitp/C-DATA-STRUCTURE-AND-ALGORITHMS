// decleration of 2D Array
#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter number of rows:";
    cin>>n;
    cout<<"Enter number of columns:";
    cin>>m;
    int ar[n][m];
    // taking input from user
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>ar[i][j];
        }
    }
    // print the 2D array
    cout<<"Matrix is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}