// print all prime number till n
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=2;
    int div=2;
    if(num<=n){
        if(div<num){
            if(num%div==0){
                num=num+1;
            }else{
                div=div+1;
            }
        }cout<<num;
        num=num+1;
    }else{
        cout<<0;
    }
    return 0;
}