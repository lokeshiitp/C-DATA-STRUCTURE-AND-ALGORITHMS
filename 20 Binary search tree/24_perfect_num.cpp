// Perfect number in an array
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

bool isperfect(int n){
    int sum=1;

    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            if(i==n/i){
                sum+=i;
            }else{
                sum+=i+n/i;
            }
        }
    }
    if(sum==n && n!=1){
        return true;
    }else{
        return false;
    }
}

int MaxSum(int ar[], int n, int k){
    if(n<k){
        cout<<"Invalid values"<<endl;
        return -1;
    }
    int res=0;
    for(int i=0; i<k; i++){
        res+=ar[i];
    }
    int sum=res;
    for(int j=k; j<n; j++){
        sum=sum+ar[j]-ar[j-k];
        res=max(res, sum);
    }
    return res;
}

int MaxnumbersofPerfects(int ar[], int n, int k){
    for(int i=0; i<n; i++){
        if(isperfect(ar[i])){
            ar[i]=1;
        }else{
            ar[i]=0;
        }
    }
    return MaxSum(ar, n, k);
}

int main(){
    int ar[]={28, 2, 3, 6, 496, 99, 8128, 24};
    int k=4;
    int n=8;

    cout<<MaxnumbersofPerfects(ar, n, k)<<endl;

    return 0;

}