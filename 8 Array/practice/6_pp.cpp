// Most accured elements in an array
#include<iostream>
using namespace std;

void Most_accured_element(int n, int a[]){
    int max_count=0;
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
        }
    }
    for(int i=0; i<n; i++){
        int count=1;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count==max_count){
            cout<<"\nThe most accured element is:"<<a[i];
        }
    }
}   

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    Most_accured_element(n, a);

    return 0;
}