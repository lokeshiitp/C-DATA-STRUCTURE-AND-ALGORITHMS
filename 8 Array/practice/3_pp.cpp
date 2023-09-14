// Second Largest elements
#include<iostream>
#include<climits>
using namespace std;

void Second_Largest(int n, int a[]){
    int i, first, second;
    if(n<2){
        cout<<"Invalid Input";
    }
    first=second=INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]>first){
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]!=first){
            second=a[i];
        }
    }
    if(second==INT_MIN){
        cout<<"NO second Largest element";
    }else{
        cout<< "\nThe second largest element is: " <<second;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    Second_Largest(n, a);

    return 0;
}
