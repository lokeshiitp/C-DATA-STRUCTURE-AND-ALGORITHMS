#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool ispalindrom(int n){
    //reverse n=123.....number=321;
    int temp=n, number=0;

    while(temp>0){
        number=number*10+temp%10;
        temp=temp/10;
    }
    if(number==n){
        return true;
    }else{
        false;
    }
}
int findpalindromicsubarray(vector<int> ar, int k){
    int num=0;

    for(int i=0; i<k; i++){
        num=(num*10)+ar[i];
    }
    if(ispalindrom(num)){
        return 0;
    }
    for(int j=k; j<ar.size(); j++){
        num=((num % (int)pow(10, k-1))*10)+ar[j];

        if(ispalindrom(num)){
            return j-k+1;
        }
    }
    return -1;
}

int main(){
    vector<int> ar={2, 3, 5, 1, 1, 5};
    int k=4;

    int ans=findpalindromicsubarray(ar, k);
    if(ans==-1){
        cout<<"palindromic subarray does't exist"<<endl;
    }else{
        for(int i=ans; i<ans+k; i++){
            cout<<ar[i]<<" ";
        }cout<<endl;
    }

    return 0;
}