// Reverse of a sentence using stack
#include<iostream>
#include<stack>
using namespace std;

void ReverseSentence(string s){
    stack<string> st;
    for(int i=0; i<s.length(); i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;

}

int main(){
    string s="what are you doing baby";

    ReverseSentence(s);

    return 0;
}