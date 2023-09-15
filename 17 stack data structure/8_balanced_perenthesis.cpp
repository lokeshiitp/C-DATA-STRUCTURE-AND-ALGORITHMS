// Balanced Parenthesis
#include<iostream>
#include<stack>
using namespace std;

bool isvalid(string s){
    stack<char> st;
    bool ans=true;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }

    return ans;
}

int main(){
    string s="{[()]}";
    if(isvalid(s)){
        cout<<"string is valid and balanced"<<endl;
    }else{
        cout<<"string is invalid and unbalanced"<<endl;
    }
    return 0;
}