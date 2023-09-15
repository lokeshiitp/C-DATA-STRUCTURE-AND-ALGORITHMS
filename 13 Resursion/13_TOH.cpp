// tower of hanoi
#include<iostream>
using namespace std;

void TowerOfHanoi(int n, char sor, char dest, char helper){
    if(n==0){      //base condition
        return;
    }
    TowerOfHanoi(n-1, sor, helper, dest);
    cout<<"Move From "<<sor<<" to "<<dest<<endl;
    TowerOfHanoi(n-1, helper, dest, sor);
}

int main(){

    TowerOfHanoi(3, 'A', 'C', 'B');
    return 0;
}