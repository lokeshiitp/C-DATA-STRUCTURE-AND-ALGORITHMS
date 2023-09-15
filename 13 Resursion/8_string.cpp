// reverse of a string using recursion
#include<iostream>
using namespace std;

void Reverse(string s){
    if(s.length()==0){        // base condition
        return;
    }
    string ros=s.substr(1);     // 1 denoted no skip any word
    Reverse(ros);
    cout<<s[0];                // 0 denoted starting at the beginning after reverse
    
}

int main(){
    string s="LOKESH";

    Reverse(s);
    

    return 0;
}