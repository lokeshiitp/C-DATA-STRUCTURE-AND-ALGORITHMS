// replace pi into 3.14
#include<iostream>
using namespace std;

void ReplacePi(string s){
    if(s.length()==0){     // base condition
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        ReplacePi(s.substr(2));
        
        
    }else{
        cout<<s[0];
        ReplacePi(s.substr(1));
    }
       
        
    
}

int main(){

    ReplacePi("pippxxpiwspitopi");

    return 0;
}