// rat in maze problem
#include<iostream>
using namespace std;

bool Issafe(int** ar, int x, int y, int n){
    if(x<n && y<n && ar[x][y]==1){
        return true;
    }
    return false;

}
bool RatinMaze(int** ar, int x, int y, int n, int** solArr){
    if(x==n-1 && y==n-1){               //base condition
        solArr[x][y]=1;
        return true;
    }

    if(Issafe(ar, x, y, n)){
        solArr[x][y]=1;
        if(RatinMaze(ar, x+1, y, n, solArr)){
            return true;
        }
        if(RatinMaze(ar, x, y+1, n, solArr)){
            return true;
        }
        solArr[x][y]=0;    // backtracking
        return false;
    }
    return false;
}

int main(){
    int n;
    cout<<"size of maze: ";
    cin>>n;
    int** ar=new int*[n];     //dynamic allocation of an array in memory
    for(int i=0; i<n; i++){
        ar[i]=new int[n];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; i++){
            cin>>ar[i][j];
        }cout<<endl;
    }
    int** solArr=new int*[n];     //dynamic allocation of an array in memory
    for(int i=0; i<n; i++){  
        solArr[i]=new int[n];
        for(int j=0; j<n; j++){
            solArr[i][j]=0;
        }
    }

    if(RatinMaze(ar, 0, 0, n, solArr)){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; i++){
                cout<<solArr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}

