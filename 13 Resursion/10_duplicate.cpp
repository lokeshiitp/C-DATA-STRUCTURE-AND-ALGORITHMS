// Reemove duplicate from an string
#include<iostream>
using namespace std;

string RemoveDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=RemoveDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }else{
        return (ch+ans);
    }
}


int main(){
    string s="aaabbbceeedddff";

    cout<<RemoveDup(s);

    return 0;
}