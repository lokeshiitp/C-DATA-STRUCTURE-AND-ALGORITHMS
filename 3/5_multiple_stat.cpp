// multiple statement
#include<iostream>
using namespace std;

int main(){
    char button;
    cout<<"Input a character:";
    cin>>button;
    if(button=='a'){
        cout<<"HELLO";
    }else if (button=='b')
    {
        cout<<"NAMASTE";
    }else if(button=='c'){
        cout<<"Pranam";
    }else{
        cout<<"i am learning more";
    }
    
    return 0;
}