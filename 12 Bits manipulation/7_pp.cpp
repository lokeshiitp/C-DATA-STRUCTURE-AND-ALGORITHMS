// unique number in triplate number
#include<iostream>
using namespace std;

bool getBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
int setBit(int n, int pos){
    return (n | (1<<pos));
}
int unique(int ar[], int n){
    int result =0;
    for(int i=0; i<64; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            if(getBit(ar[j], i)){
                sum++;
            }
        }
        if(sum%3==0){
            result=setBit(result, i);
        }
    }
    return result;
}

int main(){
    int ar[]={1,2,3,4,1,2,3,1,2,3};

    cout<<unique(ar, 10)<<endl;

    return 0;
}