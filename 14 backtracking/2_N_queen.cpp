// N-Queen problem
#include<iostream>
using namespace std;

bool Issafe(int** ar, int x, int y, int n){

    for(int row=0; row<x; row++){
        if(ar[row][y]==1){        //queen is already placed that column
            return false;
        }
    }
    // check for left diagonal
    int row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(ar[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
    // check for right diagonal
    row=x;
    col=y;
    while(row>=0 && col<n){
        if(ar[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;

}

bool Nqueen(int** ar, int x, int n){
    if(x>=n){
        return true;
    }
    for(int col=0; col<n; col++){
        if(Issafe(ar, x, col, n)){
            ar[x][col]=1;
            if(Nqueen(ar, x+1, n)){
            return true;
            }
            ar[x][col]=0;  // backtracking
        }
               
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    int** ar=new int*[n];
    for(int i=0; i<n; i++){
        ar[i]=new int[n];
        for(int j=0; j<n; j++){
            ar[i][j]=0;
        }
    }

    if(Nqueen(ar, 0, n)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<ar[i][j]<<" ";
            }cout<<endl;
        }
    }

    return 0;
}