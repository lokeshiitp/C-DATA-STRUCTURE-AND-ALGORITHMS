// Get bits
#include<iostream>
using namespace std;

int get_bits(int n, int pos){
    return ((n & (1<<pos))!=0);
}

int set_bit(int n, int pos){
    return (n | (1<<pos));
}

int clear_bit(int n, int pos){
    int mask= ~(1<<pos);
    return (n & mask);
}

int update_bit(int n, int pos, int value){
    int mask= ~(1<<pos);
    n=(n & mask);
    return (n | (value<<pos));

}

int main(){

    cout<<get_bits(7, 0)<<endl;
    cout<<set_bit(5, 1)<<endl;

    cout<<clear_bit(7, 1)<<endl;

    cout<<update_bit(5, 1, 1)<<endl;
    return 0;
}