//vector
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v;
    v.push_back(1);      // using this function we can add element in the vector
    v.push_back(2);
    v.push_back(3);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    // 1 2 3
    /*vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    vector<int>::iterator it;
    for(int it=v.begin(); it!=v.end(); it++){
        cout<<*it<<endl;                   // iterator is a pointer
    }*/
    for(auto element:v){
        cout<<element<<" ";
    }
    v.pop_back();    // last element remove from vector
    // 1 2
    vector<int>v2 (3, 50);      // size 3 and element=50
    // 50 50 50
    swap(v, v2);               // swap values of each other vectors
    for(auto element:v){
        cout<<element<<" ";
    }
    for(auto element:v2){
        cout<<element<<" ";
    }

    sort(v.begin(), v.end());      // short the vactor
    

    return 0;
}