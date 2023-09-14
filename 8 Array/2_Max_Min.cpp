// Find maximum and Minimum elements of an array
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of Array:";
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    
    int maxNo=INT_MIN;            // min int no. in c++
    int minNo=INT_MAX;            // max int no. in c++
    for(int i=0; i<n; i++){
       /* if(array[i]>maxNo){
            maxNo=array[i];
        }*/
        maxNo=max(maxNo, array[i]);      // we can compare like this  
       /* if(array[i]<minNo){
            minNo=array[i];
        }*/
        minNo=min(minNo, array[i]);       // we can compare also like this
    }cout<<endl;
    
    cout<<"max_no:"<<maxNo<<endl;
    cout<<"min_no:"<<minNo<<endl;

    return 0;
}