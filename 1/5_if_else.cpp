// use of if else statement
#include<iostream>
using namespace std;

int main(){
    int savings;
    cin>>savings;
    if(savings>5000){
        cout<<"going with Neha\n";
    }else if (savings>2000)
    {
        cout<<"going with Rashmi\n";
    }else{
        cout<<"going with Friends\n";
    }
    return 0;
    
}