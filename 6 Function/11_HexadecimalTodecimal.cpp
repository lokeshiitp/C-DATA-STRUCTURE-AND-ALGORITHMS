// coversion Hexadecimal to decimal
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int HexadecimalTodecimal(string n){

    int ans=0;
    int x=1;
    int s=n.size();                       // function of string
    
    for(int i=s-1; i>=0; i--){
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int main(){
    string n;
    cout<<"Enter Number:";
    cin>>n;

    cout<<HexadecimalTodecimal(n)<<endl;

    return 0;

}