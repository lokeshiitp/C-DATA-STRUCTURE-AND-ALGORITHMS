// maximum sum of a subarray of an array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int ar[n];
    
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    int maxsum=INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=ar[k];
            }
            maxsum=max(maxsum, sum);
        }
    }

    cout<<"maxsum : "<<maxsum<<endl;
    return 0;
}