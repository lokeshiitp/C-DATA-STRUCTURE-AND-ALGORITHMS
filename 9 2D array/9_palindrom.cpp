// check given name is palindrome or note
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ar[n+1];
    cin>>ar;
    bool check=1;
    for(int i=0; i<n; i++){
        if(ar[i]!=ar[n-1-i]){
            check=0;
            break;
        }
    }

    if(check==true){
        cout<<"Word is panidrome\n";
    }else{
        cout<<"Word is not panidrome\n";
    }
    return 0;
}