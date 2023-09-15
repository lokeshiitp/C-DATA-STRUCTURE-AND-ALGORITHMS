// STL in Hasing
#include<iostream>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    map<int, int> m;
    m[8]=2;
    cout<<m[8]<<endl;

    unordered_map<int, int> um;
    um[3]=7;
    um[1]=8;

    cout<<um[3]<<endl;

    

    return 0;

}