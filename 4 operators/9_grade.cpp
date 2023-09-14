#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    switch (marks)
    {
    case 33 ... 50:
        cout<<"Your grade is:DD"<<endl;
        break;
    case 51 ... 60:
        cout<<"Your grade is:CC"<<endl;
        break;
    case 61 ... 70:
        cout<<"Your grade is:BC"<<endl;
        break;
    case 71 ... 80:
        cout<<"Your grade is:BB"<<endl;
        break;
    case 81 ... 90:
        cout<<"Your grade is:AB"<<endl;
        break;
    case 91 ... 100:
        cout<<"Your grade is:AA"<<endl;
        break;
    default:
        cout<<"Fail";
        break;
    }
    return 0;
}
