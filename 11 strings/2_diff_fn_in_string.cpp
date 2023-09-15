// different-2 functions in string
#include<iostream>
#include<string>
using namespace std;

int main(){
    string st;
    string s1="Fam";
    string s2="ily";

    s1.append(s2);     //add string s1 and s2 in forward direction
    cout<<s1<<endl;
   // cout<<s1+s2<<endl;    // we can use this also for adding strings
    // excess of a character in word
    cout<<s1[1]<<endl;      // similer like array

    // for clear the string we use (string name.clear) function
    string abc="abcdefghijklmnopqrstuvxyz";
    abc.clear();
    cout<<abc<<endl;

    // compare of two strings
    string s3="abc";
    string s4="abc";

    if(!s3.compare(s4)){
        cout<<"strings are equal";
    }else{
        cout<<"strings are not equal";
    }
    // checking string is empty or not
    string s5="pqr";
    cout<<s5<<endl;

    s5.clear();

    if(s5.empty()){
        cout<<"string is empty";
    }
    // erase char in particular index
    string s="lokeshbairwa";

    s.erase(3, 2);      // for erase we use this function
    cout<<s<<endl;

    // for finding characters
    string str="wearetogether";
    cout<<str.find("to")<<endl;   // given index of 1st character

    // insert a string in a string
     string s6="IU";
     string s7="LOVE";

     cout<<s7.size()<<endl;   // for finding length of string
     s6.insert(1, s7);
     cout<<s6<<endl;

    return 0;
}