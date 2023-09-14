// switch statement
#include<iostream>
using namespace std;

int main(){
    char Button;
    cout<<"Enter your Button:";
    cin>>Button;
    switch (Button)
    {
    case 'a':
        cout<<"HELLO"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"salute"<<endl;
        break;
    case 'd':
        cout<<"Hola"<<endl;
        break;
    case 'e':
        cout<<"Ciao"<<endl;
        break;
    
    default:
    cout<<"I am still learning more"<<endl;                                                                                                                                         
        break;
    }

    return 0;
}