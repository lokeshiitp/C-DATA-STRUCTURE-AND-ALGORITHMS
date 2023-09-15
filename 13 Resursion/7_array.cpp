// check first occurance and last occurance of an element in given array
#include<iostream>
using namespace std;

int firstocc(int ar[], int n, int i, int key){
    if(i==n){
        return -1;      // base condition
    }
    if(ar[i]==key){
        return i;
    }
    return firstocc(ar, n, i+1, key);
}

int lastocc(int ar[], int n, int i, int key){
     if(i==n){
        return -1;
    }
    int restarray=lastocc(ar, n, i+1, key);
    if(restarray!=-1){
        return restarray;
    }
    if(ar[i]==key){
        return i;
    }

    return -1;
}

int main(){
    int ar[]={4,2,5,2,1,2,7};

    cout<<firstocc(ar, 7, 0, 2)<<endl;
    cout<<lastocc(ar, 7, 0, 2)<<endl;

    return 0;
}