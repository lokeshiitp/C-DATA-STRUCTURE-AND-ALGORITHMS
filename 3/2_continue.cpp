#include<iostream>
using namespace std;

int main(){
    
    for(int a=0; a<100; a++){
        if(a%3==0){
            continue;
        }
        cout<<a<<endl;
    }

    return 0;
}