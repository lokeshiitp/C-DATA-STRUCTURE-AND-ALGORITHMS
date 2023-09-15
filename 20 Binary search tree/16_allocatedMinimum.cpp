// allocated minimum book's pages to any one student
#include<iostream>
#include<climits>
using namespace std;

bool ispossible(int ar[], int n, int m, int min){
    int studentrequired=1, sum=0;
    for(int i=0; i<n; i++){
        if(ar[i]>min){
            return false;
        }
        if(sum+ar[i]>min){
            studentrequired++;
            sum=ar[i];
            if(studentrequired>m){
                return false;
            }
        }else{
            sum+=ar[i];
        }
    }
    return true;
}

int AllocatedMinimum(int ar[], int n, int m){
    int sum=0;
    if(n<m){
        return -1;
    }
    for(int i=0; i<n; i++){
        sum=sum+ar[i];
    }
    int start=0, end=sum, ans=INT_MAX;
    while(start<=end){
        int mid=((start+end)/2);
        if(ispossible(ar, n, m, mid)){
            ans=min(ans, mid);
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return ans;
}

int main(){
    int ar[]={12, 34, 67, 90};
    int n=4;
    int m=2;

    cout<<"Minimum Allocation of pages:"<<AllocatedMinimum(ar, n, m)<<endl;

    return 0;
}