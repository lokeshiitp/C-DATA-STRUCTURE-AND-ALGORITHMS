// gretest common factor
#include<bits/stdc++.h>
#include<string>
using namespace std;



string gcdOfStrings(string str1, string str2) {
    string ans="";
    int n=str1.size();
    int m=str2.size();
    int i=0, j=0;
    while(i<n || j<m){
        if(str1[i]==str2[j]){
            ans.push_back(str1[i]);
            i++;
            j++;
        }
    }
    return ans;
}


int main(){
    string str1, str2;
    cin>>str1>>str2;

    cout<<gcdOfStrings(str1, str2)<<endl;

    return 0;
}