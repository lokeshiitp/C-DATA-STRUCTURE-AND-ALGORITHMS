// make greatest number by given number string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string a="5367921";

    sort(a.begin(), a.end(), greater<int>());     // decending order

    cout<<a<<endl;

    return 0;
}