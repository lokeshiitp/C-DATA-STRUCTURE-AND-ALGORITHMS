// for loop, sum of 1st n natural numbers
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int a=1; a<=n; a++){      // using of for loop
        sum=sum+a;
    }

    cout<<sum<<endl;

    return 0;
}