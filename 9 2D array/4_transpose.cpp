// transpose of a matrix
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter rows=column:";
    cin>>n;
    int ar[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>ar[i][j];
        }
        cout<<"\n";
    }
    // matrix
    cout<<"Matrix is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }

    // transpose matrix
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int temp=ar[i][j];
            ar[i][j]=ar[j][i];
            ar[j][i]=temp;
        }
    }

    //print transpose matrix
    cout<<"Transpose matrix:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}