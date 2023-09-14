// Array in pointer
#include<iostream>
using namespace std;

int main(){
    int ar[]={10, 20, 30};
    cout<<*ar<<endl;

    int *ptr=ar;
    for(int i=0; i<3; i++){
       // cout<<*ptr<<" ";     // print all the elements of an array
        //ptr++;
        cout<<*(ar+i)<<" ";    // also print like that 
        // ar++;   // illegal
    }
    return 0;
}