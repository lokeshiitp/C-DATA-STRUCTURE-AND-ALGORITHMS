// sepeartion of a given string
#include<iostream>
#include<string>
using namespace std;

int main(){
    string st="I LOVE YOU";

    for(int i=0; i<st.length(); i++){
        cout<<st[i]<<endl;
    }

    string s=st.substr(2, 4);   // substring in an string
    cout<<s<<endl;

    return 0;
}