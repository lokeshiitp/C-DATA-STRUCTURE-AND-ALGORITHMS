//constructor in class
#include<iostream>
using namespace std;

class student{
    string name;
    public:
    int age;
    bool gender;

    student(){
        cout<<"Default constructor"<<endl;
    }// default constructor

    student(string s, int a, int g){
        cout<<"parametrised constructor:"<<endl;
        name=s;
        age=a;
        gender=g;
    }// parametrised constructor

    student(student &a){                 // we take address in copy constructor
        cout<<"copy constructor: "<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }// copy constructor

    ~student(){
        cout<<"destructor called"<<endl;
    }

    void setname(string s){
        name=s;
    }
    void getname(){
        cout<<name<<endl;
    }
    void PrintInfo(){
    cout<<"name=";
    cout<<name<<endl;
    cout<<"age=";
    cout<<age<<endl;
    cout<<"gender=";
    cout<<gender<<endl;
}
bool operator==(student &a){         //given address of a
    if(name==a.name && age==a.age && gender==a.gender){
        return true;
    }
    return false;
}// operator overloading
};

int main(){

    student a("Neha", 20, 1);
    a.getname();
    a.PrintInfo();
    student b("priya", 19, 1);
    b.PrintInfo();
    student c;
    student d=a;                // here call copy constructor
    
    if(b==a){
        cout<<"same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}