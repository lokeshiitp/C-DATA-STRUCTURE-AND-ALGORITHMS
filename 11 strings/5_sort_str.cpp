// sorting a string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s="sjifnmslme";

    sort(s.begin(), s.end());
    cout<<s<<endl;
    
    return 0;
}