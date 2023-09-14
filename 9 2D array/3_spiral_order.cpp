// spiral order printing of a matrix
#include<iostream>
using namespace std;

int main(){
    int n, m;
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
    // spiral order print
    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;
    while(row_start<=row_end && col_start<=col_end){
        //for row start
        for(int col=col_start; col<=col_end; col++){
            cout<<ar[row_start][col]<<" ";
        }
        row_start++;

        // for column end
        for(int r=row_start; r<=row_end; r++){
            cout<<ar[r][col_end]<<" ";
        }
        col_end--;

        // for end row
        for(int col=col_end; col>=col_start; col--){
            cout<<ar[row_end][col]<<" ";
        }
        row_end--;

        // for column start
        for(int r=row_end; r>=col_start; r--){
            cout<<ar[r][col_start]<<" ";
        }
        col_start++;
    }

    return 0;

}