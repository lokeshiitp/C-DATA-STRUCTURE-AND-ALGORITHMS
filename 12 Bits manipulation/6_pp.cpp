// two unique numbers
#include<iostream>
using namespace std;

int setBit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
void unique(int ar[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum=xorsum^ar[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit !=1){
        setbit =xorsum & 1;
        pos++;
        xorsum= xorsum>>1;
    }
    int newxor=0;
    for(int i=0; i<n; i++){
        if(setBit(ar[i], pos-1)){
            newxor = newxor^ar[i];
        }
    }
    cout<<newxor<<endl;
    tempxor=tempxor^newxor;
    cout<<tempxor<<endl;
}

int main(){
    int ar[]={1,2,3,1,2,3,5,7};

    unique(ar, 8);

    return 0;
}