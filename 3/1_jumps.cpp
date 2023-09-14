#include<iostream>
using namespace std;

int main(){
    int pocketmoney=3000;
    for(int date=1; date<=30; date++){

        if(date%2==0){
            continue;          // used to skip to the next iteration
        }
        if(pocketmoney==0){
            break;            // used to terminate the loop
        }
        cout<<"GO OUT TODAY! "<<date<<endl;
        pocketmoney=pocketmoney-300;
    }

    return 0;
}