// friends pairing problem
#include<iostream>
using namespace std;

int friendspairing(int n){
    if(n==0 || n==1 || n==2){
        return n;
    }

    return friendspairing(n-1)+friendspairing(n-2)*(n-1);
}

int main(){
    int n;
    cout<<"enter number of friends: ";
    cin>>n;

    cout<<friendspairing(n)<<endl;
    return 0;

}