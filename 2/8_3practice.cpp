// first n natural numbers and their sum
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    int sum=0;
    for(a=1; a<=n; a++){
        cout<<a<<endl;
        sum=sum+a;
    }
    cout<<"\n sum of n numbers is:"<<sum<<endl;

    return 0;
}