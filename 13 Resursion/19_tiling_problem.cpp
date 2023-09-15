// tiling problem
// possible number of way to file 2*n tile by 2*1 tiles
#include<iostream>
using namespace std;

int tilingWays(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }

    return tilingWays(n-1)+tilingWays(n-2);
}

int main(){
    int n;
    cout<<"enter size: ";
    cin>>n;

    cout<<tilingWays(n)<<endl;
    return 0;

}