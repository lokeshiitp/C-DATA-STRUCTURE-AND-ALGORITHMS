//Search in a rotating array
#include<iostream>
using namespace std;

int searchinRotatingarray(int ar[], int n, int key, int left, int right){
    if(left>right){
        return -1;
    }
    int mid=((left+right)/2);
    if(ar[mid]==key){
        return mid;
    }
    if(ar[left]<=ar[mid]){
        if(key>ar[left] && key<ar[mid]){
            return searchinRotatingarray(ar, n, key, left, mid-1);
        }else{
            return searchinRotatingarray(ar, n, key, mid+1, right);
        }
    }
    if(key>ar[mid] && key<=ar[right]){
        return searchinRotatingarray(ar, n, key, mid+1, right);
    }else{
        return searchinRotatingarray(ar, n, key, left, mid-1);
    }
}

int main(){
    int ar[]={6,7,8,9,10,1,2,5};
    int n=8;
    int key=8;

    int idx=searchinRotatingarray(ar, n, key, 0, n-1);
    if(idx==-1){
        cout<<"Index doesnot exist"<<endl;
    }else{
        cout<<"Key is present at index: "<<idx<<endl;
    }

    return 0;

}