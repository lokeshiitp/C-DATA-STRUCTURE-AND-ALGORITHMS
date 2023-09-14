// Largest three numbers in an array
#include<iostream>
#include<climits>
using namespace std;

// decleration of function
void three_largest(int n, int ar[]){
    int first, second, third, i;

    if(n<3){
        cout<<"Invalid Input";
    }
    third=second=first=INT_MIN;
    for(int i=0; i<n; i++){
        if(ar[i]>first){
            third=second;
            second=first;
            first=ar[i];
        }
        else if(ar[i]>second){
            third=second;
            second=ar[i];
        }else if(ar[i]>third){
            third=ar[i];
        }
    }
    cout << "\nThree largest elements are: " <<first <<", "<< second <<", "<< third;
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    three_largest(n, ar);

    return 0;
}