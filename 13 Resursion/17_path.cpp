// count number of path possible from starting to end point in a gameboard
#include<iostream>
using namespace std;

int countpath(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
   
    int count=0;
    for(int i=0; i<=e; i++){
        count+=countpath(s+i, e);
    }
    return count;
   
}

int main(){

    cout<<countpath(1, 4)<<endl;
    
    return 0;
}