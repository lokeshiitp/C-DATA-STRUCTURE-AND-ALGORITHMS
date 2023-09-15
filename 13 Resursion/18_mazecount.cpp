// count the number of path in maze
#include<iostream>
using namespace std;

int mazepath(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return mazepath(n, i+1, j)+mazepath(n, i, j+1);
}

int main(){

    cout<<"NUMBER OF POSSIBLE PATH: "<<mazepath(3, 0, 0)<<endl;

    return 0;
}