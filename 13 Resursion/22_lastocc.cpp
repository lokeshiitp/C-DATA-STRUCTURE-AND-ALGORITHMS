#include<iostream>
using namespace std;

int lastoccu(int ar[], int n, int n, int key){
    if(n==0){
        return -1;
    }
    if(ar[n]==key){
        return n;
    }
    return lastoccu(ar, n, n-1, key);

}

int main(){
    int ar[9]={1,2,2,7,9,8,2,5,6};

    cout<<lastoccu(ar, 9, 8, 2)<<endl;

    return 0;
}