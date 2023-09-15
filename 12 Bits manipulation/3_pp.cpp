// count number of ones in binary representation of a number
#include<iostream>
using namespace std;

int count_ones(int n){
    int count=0;
    while(n){
        n= n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"enter number:";
    cin>>n;

    cout<<count_ones(n)<<endl;

    return 0;
}