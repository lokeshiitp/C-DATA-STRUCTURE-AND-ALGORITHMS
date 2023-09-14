#include<iostream>
using namespace std;

int main(){
    float n1, n2, n3, totalMarks;
    cout<<"Enter your physics marks: "<<endl;
    cin>>n1;
    cout<<"Enter your Chemitry marks: "<<endl;
    cin>>n2;
    cout<<"Enter your Maths marks: "<<endl;
    cin>>n3;
    totalMarks=(n1+n2+n3)/3;
    if(n1>=33 && n2>=33 && n3>=33 && totalMarks>=40){
        cout<<"Total marks= "<<totalMarks<<endl<<"Congratulation!, You are Paas in all Subjects\n";
    }
    else cout<<"Total marks= "<<totalMarks<<"FAIL\n"<<endl;

    return 0;
    }
