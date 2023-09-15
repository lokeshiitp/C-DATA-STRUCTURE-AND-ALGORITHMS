// numbers in an array which are divisible by 3
#include<iostream>
#include<vector>
using namespace std;

void ComputeNumbersfromSubarray(vector<int> ar, int k){
    pair<int, int> ans;
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=ar[i];
    }
    bool found=false;
    if(sum%3==0){
        ans=make_pair(0, k-1);
        found=true;
    }
    for(int j=k; j<ar.size(); j++){
        if(found){
            break;
        }
        sum=sum+ar[j]+ar[j-k];

        if(sum%3==0){
            ans=make_pair(j-k+1, j);
            found=true;
        }
    }
    if(!found){
        ans=make_pair(-1, 0);
    }
    if(ans.first==-1){
        cout<<"no such subarry exists "<<endl;
    }else{
        for(int i=ans.first; i<=ans.second; i++){
            cout<<ar[i]<<" ";
        }cout<<endl;
    }
}

int main(){
    vector<int> ar={84,23,45,12,56,82};
    int k=3;

    ComputeNumbersfromSubarray(ar, k);

    return 0;
}