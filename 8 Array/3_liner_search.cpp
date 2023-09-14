// Linear searching in array
#include<iostream>
using namespace std;

int LinearSearch(int array[], int n, int key ){
    for(int i=0; i<n; i++){
        if(array[i]==key){
            return i;                       // time complexity is O(n)
        }
    }
    return -1;
}

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
    int key;
    cout<<"Enter Key:";
    cin>>key;

    cout<<LinearSearch(array, n, key)<<endl;
    
    return 0;
}