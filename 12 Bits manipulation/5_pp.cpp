// find unique number in an array where all number present two times except one number
#include<iostream>
using namespace std;

int unique_num(int n, int ar[]){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum=xorsum^ar[i];
    }
    return xorsum;
}

int main(){
    int ar[]={1,2,3,4,1,2,3};

    cout<<"unique number is:"<<unique_num(7, ar)<<endl;

    return 0;
}