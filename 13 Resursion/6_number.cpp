// print numbers till n using recursion
#include<iostream>
using namespace std;

void Dec(int n){          // function for print number in decreasing order
    if(n==0){
        return;
    }
    cout<<n<<endl;
    Dec(n-1);
}
void Inc(int n){           // function of print number in increasing order
    if(n==0){              // base condtion
        return;
    }
    Inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;

    Dec(n);    
    Inc(n);
    return 0;
}