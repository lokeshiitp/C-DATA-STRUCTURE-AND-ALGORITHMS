// smallest subarry of sum
#include<iostream>
using namespace std;

int smallestsubarraywithsum(int ar[], int n, int x){
    int sum=0, minLength=n+1, start=0, end=0;

    while(end<n){
        while(sum<=x && end<n){
            sum+=ar[end++];
        }
        while(sum>x && start<n){
            if(end-start<minLength){
                minLength=end-start;
            }
            sum-=ar[start++];
        }
    }
    return minLength;
}

int main(){
    int ar[]={1,4,45,6,10,19};
    int x=51;
    int n=6;

    int minlength=smallestsubarraywithsum(ar, n, x);

    if(minlength==n+1){
        cout<<"no such subarry is exists "<<endl;
    }else{
        cout<<"smallest length subarry is :"<<minlength<<endl;
    }

    return 0;
}