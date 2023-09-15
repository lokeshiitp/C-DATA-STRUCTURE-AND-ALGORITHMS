// base drived       //virtual function
#include<iostream>
using namespace std;

class base{
    public:
        virtual void print(){                          // for virtual call
            cout<<"this is the base class's print function"<<endl;
        }
        void display(){
            cout<<"this is the base class's display function"<<endl;
        }
};
class drived: public base{
public:
    void print(){
            cout<<"this is the drived class's print function"<<endl;
        }
        void display(){
            cout<<"this is the drived class's display function"<<endl;
        } 
};

int main(){
    base *baseptr;
    drived d;
    baseptr=&d;
    baseptr -> print();
    baseptr ->display();
    return 0;
}

