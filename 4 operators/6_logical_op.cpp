//Find input num is divisible by both 2 and 3 or divisible only one of them
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a num:";
    cin>>n;
    if(n%2==0 && n%3==0){                   // && And operator if both true then execute
        cout<<"Divisible by both"<<endl;
    }
    else if(n%2==0){
        cout<<"Divisible by only 2"<<endl;
    }
    else if(n%3==0){
        cout<<"Divisible by only 3"<<endl;
    }
    else {
        cout<<"Divisible by none";
    }

    return 0;
}