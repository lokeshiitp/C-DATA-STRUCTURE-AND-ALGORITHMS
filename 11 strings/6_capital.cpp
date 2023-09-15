// change small to capital letter
#include<iostream>
#include<string>
using namespace std;

int main(){
    string st="abcdefghijklmnopqrstuvwxyz";
     // convert into upper cases

    for(int i=0; i<st.size(); i++){
        if(st[i]>='a' && st[i]<='z'){
            st[i]-=32;                    // 'a'-'A'=32
        }
    }    
    cout<<st<<endl;

    // convert to lower case
    string str="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i=0; i<str.size(); i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;                    // 'a'-'A'=32
        }
    }    
    cout<<str<<endl;



    return 0;
}