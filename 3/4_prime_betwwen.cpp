// print all prime number b/w two numbers
#include <iostream>
using namespace std;

int main(){
    int x, y;
    cin>>x>>y;
    for(int a=x; a<=y; a++){
        int i=2;
        for(i=2; i<a; i++){
            if(a%i==0){
               break;
            }
        }
        if(i==a){
            cout<<a<<endl;
        }
       }
       return 0;
    }