//polymorphism 
// function overloding
#include<iostream>
using namespace std;

class apnacollege{
    public:
    void fun(){
        cout<<"I am function with no argument"<<endl;
    }
    void fun(int a){
        cout<<"I am function with int argument"<<endl;
    }
    void fun(double a){
        cout<<"I am function with double argument"<<endl;
    }
};

int main(){
    apnacollege obj;
    obj.fun();
    obj.fun(5);              // function call
    obj.fun(9.3);
    return 0;
}