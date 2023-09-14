// shorting of an array in decending order
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    // decending order
    for(int i=n-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }cout<<endl;
    // acending order
    for(int i=0; i<=n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}