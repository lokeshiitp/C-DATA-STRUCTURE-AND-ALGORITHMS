// All about sets
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);  // duplicates do not print
    s.insert(3);
    for(auto i: s){
        cout<<i<<" ";
    }cout<<"\n";
    cout<<s.size()<<endl;
    // print reverse of a set
    /*for(auto i=s.rbegin(); i!=s.rend(); i++){
        cout<<*i<<" ";
    }*/
    // custom comparator
    set<int, greater<int>> st;    // use for reverse print
    st.insert(1);
    st.insert(2);
    st.insert(3); 
    for(auto i : st){
        cout<<i<<" ";
    }cout<<endl;

    // lower bound and upper bound
    set<int> a;
    a.insert(1);
    a.insert(3);
    a.insert(5);
    a.insert(4);
    a.insert(2);

    cout<<*a.lower_bound(2)<<"\n";
    cout<<*a.lower_bound(3)<<"\n";
    cout<<*a.upper_bound(3)<<"\n";
    cout<<(a.upper_bound(5)==a.end())<<"\n";

    // erase from set
    a.erase(2);
    a.erase(a.begin());
    for(auto i: a){
        cout<<i<<" ";
    }

    return 0;
}