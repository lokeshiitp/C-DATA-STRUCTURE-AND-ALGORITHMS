// string to integer function
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="298";
    int x=stoi(s);      // convert string to integer
    cout<<x+2<<endl;
    // integer to string
    int a=548;
    cout<<to_string(a)+"2"<<endl;
    return 0;
}