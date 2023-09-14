// check given number is armstrong or not
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }

    if(sum==originaln){
        cout<<"Armstrong Number"<<sum<<endl;
    }else{
        cout<<"Not Armstrong Number"<<sum<<endl;
    }

    return 0;
}