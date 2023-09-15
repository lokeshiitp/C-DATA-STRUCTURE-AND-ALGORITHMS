// pair
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool mycompare(pair<int, int>p1, pair<int, int>p2){
    return p1.first<p2.first;
}

int main(){

    pair<int, char> p; //decleration of a pair
    p.first=3;
    p.second='a';

    int ar[]={10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;
    for(int i=0; i<(sizeof(ar)/sizeof(ar[0])); i++){
        pair<int, int>p;
        p.first=ar[i];
        p.second=i;
        v.push_back(make_pair(ar[i], i));    // function for direct use for making pair

    }

    sort(v.begin(), v.end(), mycompare);
    for(int i=0; i<v.size(); i++){
        ar[v[i].second]=i;
    }
    for(int i=0; i<v.size(); i++){
        cout<<ar[i]<<" ";
    }
    return 0;

}