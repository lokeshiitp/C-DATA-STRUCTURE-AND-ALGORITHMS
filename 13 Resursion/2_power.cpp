// find n reised to the power p using recursion
#include<iostream>
using namespace std;

int power(int n, int p){
    if(p==0){            // base condition
        return 1;
    }
    int prevpower=power(n, p-1);
    return n*prevpower;
}

int main(){
    int n, p;
    cin>>n>>p;

    cout<<power(n, p)<<endl;

    return 0;
}