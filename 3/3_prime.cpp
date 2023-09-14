#include<iostream>
using namespace std;

int main(){
  
  int x;
  int div=2;
  cin>>x;
  for(div=2; div<x; div++){
     if(x%div==0){
     cout<<"non prime"<<endl;
     break;
  }
   else{
    cout<<"prime"<<endl;
    break;
   }
    
  }
  return 0;

  }