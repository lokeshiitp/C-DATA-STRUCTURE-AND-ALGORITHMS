//Introduction to class
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
    public:
    string name;               // data members
    int age;
    bool gender;

void setname(string s){
    name=s;               // use this function when you not doing public name
}
void PrintInfo(){
    cout<<"name="; 
    cout<<name<<endl;
    cout<<"age=";
    cout<<age<<endl;
    cout<<"gender=";
    cout<<gender<<endl;
}
};

int main(){
    /*student a;
    a.name='neha';
    a.age=18;
    a.gender=0;*/
    student ar[3];
    for(int i=0; i<3; i++){
        cout<<"name: ";
        cin>>ar[i].name;
        cout<<"age: ";
        cin>>ar[i].age;
        cout<<"gender: ";
        cin>>ar[i].gender;
        
    }
    for(int i=0; i<3; i++){
        ar[i].PrintInfo();
    }
    return 0;
}