// check given number prime or not
#include<iostream>
using namespace std;

int main(){
    int num;
    int a=2;
    cin>>num;
    while(num>a){
        if(num%a==0){
            cout<<"NON PRIME"<<endl;
            a=a++;
            break;
        }
        cout<<"PRIME"<<endl;
        break;
    }

    return 0;
}
