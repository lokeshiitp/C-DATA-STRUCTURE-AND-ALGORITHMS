// print the all possible word using keypad phone
#include<iostream>
using namespace std;

string keypadArr[9]=("", "./", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ");

void Keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string ros=s.substr(1);
    for(int i=0; i<code.length(); i++){
        Keypad(ros, ans+code[i]);   
    }
}

int main(){

    Keypad("34", "");

    return 0;
}