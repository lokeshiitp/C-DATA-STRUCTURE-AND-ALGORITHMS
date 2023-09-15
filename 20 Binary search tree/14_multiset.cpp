// all about multiset
#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;
    //s.erase(3);     // all three will be deleted
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;
    s.erase(s.find(3));
    for(auto i: s){
        cout<<i<<" ";
    }cout<<endl;
    // unordered set
    unordered_set<int> a;
    a.insert(4);
    a.insert(1);
    a.insert(3);
    a.insert(5);

    for(auto i: a){
        cout<<i<<" ";
    }

    return 0;
}