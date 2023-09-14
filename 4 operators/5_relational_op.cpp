// Relational opreators
#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter num1:";
    cin>>n1;
    cout<<"Enter num2:";
    cin>>n2;
    if(n1==n2){                                // equal to operator 
        cout<<"Both are equal"<<endl;
    }
    else if(n1>n2){                           // greater then operator
        cout<<"n1 Greater then n2"<<endl;
    }
    else if(n1<n2){                           // less then operator
        cout<<"n1 Less then n2"<<endl;
    }
    return 0;
}