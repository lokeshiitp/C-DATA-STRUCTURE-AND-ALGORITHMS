// Short of a vector
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(7);

    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    int sum=accumulate(v.begin(), v.end(), 0);
    cout<<sum<<endl;

    return 0;
}