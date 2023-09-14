// Multiplication of two matrices
#include<iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cout<<"Enter raws of 1st matrix:";
    cin>>n1;
    cout<<"Enter columns of 1st matrix and rows of 2nd matrix:";
    cin>>n2;
    cout<<"Enter columns of 2nd matrix:";
    cin>>n3;
    int m1[n1][n2], m2[n2][n3];  // matrix_1=m1 and matrix_2=m2
    // for Matrix 1st
    cout<<"Enter elements of 1st matrix:\n";
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>m1[i][j];
        }
    }
    // for Matrix 2nd 
    cout<<"Enter elements of 2nd matrix:\n";
    for(int i=0; i<n2; i++){
        for(int j=0; j<n3; j++){
            cin>>m2[i][j];
        }
    }
    // code for mul. matrix
    int ans[n1][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            ans[i][j]=0;
        }
    }

    // multiplication of matrix
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                ans[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    // print
    cout<<"Multiplication matrix is:\n";
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}