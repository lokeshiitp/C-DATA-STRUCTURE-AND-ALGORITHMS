#include<iostream>
#include<string>     // header file for strings
using namespace std;

int main(){
    string str="lokesh";      // decleration of string
   /* cin>>str;
    cout<<str;   */
    string str1(5, 'P');
    cout<<str1<<endl;

    // for print a sentence
    string st;
    getline(cin, st);       // for this we use getline(cin, str name) function
    cout<<st<<endl;

    return 0;

}