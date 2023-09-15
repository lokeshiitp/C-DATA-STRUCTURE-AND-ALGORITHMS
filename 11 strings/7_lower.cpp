// convert lower case string to upper case
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string st="abdojjofn";

    transform(st.begin(), st.end(), st.begin(), ::toupper);

    cout<<st<<endl;
    // convert to lower
    transform(st.begin(), st.end(), st.begin(), ::tolower);

    cout<<st<<endl;
    return 0;

}