// sum of first n natural number using function
#include<iostream>
using namespace std;

int sum(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}

int main(){
    int n; 
    cout<<"Enter Number:";
    cin>>n;
    int summation=sum(n);
    cout<<"Summation: "<<summation;

    return 0;
}