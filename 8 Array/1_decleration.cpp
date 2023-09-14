// Decleration of Array
#include<iostream>
#include<bits/stdc++.h>
#define N 100;
using namespace std;

int main(){
   // int array[5]={2,4,6,8,10};            // decleration of array
   // cout<<array[3];

    // taking input from user as array
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){            // for taking all elements of array from user
        cin>>array[i];
    }
    sort(array, array+n);           // function for shorting of given array
    for(int i=0; i<n; i++){          // or print array
        cout<<array[i]<<" ";
    }
    



    return 0;

}