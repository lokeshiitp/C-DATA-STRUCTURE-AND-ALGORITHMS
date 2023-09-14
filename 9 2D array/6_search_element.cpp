// search an element it is present in given matrix or not
#include<iostream>
using namespace std;

int main(){
    int n, m; cin>>n>>m;
    int target; cin>>target;
    int M[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>M[i][j];
        }
    }    
    int r=0, c=m-1;
    bool found=false;
    while(r<n and c>=0){
        if(M[r][c]==target){
            found=true;
        }
        if(M[r][c]>target){
            c--;
        }else{
            r++;
        }
    }
    if(found){
        cout<<"element found\n";
    }else{
        cout<<"element does not exist";
    }
    return 0;
}