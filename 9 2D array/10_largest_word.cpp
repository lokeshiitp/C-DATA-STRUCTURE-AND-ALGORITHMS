// find largest word in a sentence
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    char ar[n+1];
    cin.getline(ar, n);
    cin.ignore();
    int i=0, curr_length=0, max_length=0;
    int st=0, maxst=0;
    while(1){
        if(ar[i]==' ' || ar[i]=='\0'){
            if(curr_length>max_length){
                max_length=curr_length;
                maxst=st;

            }
            curr_length=0;
            st=i+1;
        }else

        curr_length++;
        if(ar[i]=='\0')
            break;

        i++;
    }
    cout<<max_length<<endl;
    for(int i=0; i<max_length; i++){
        cout<<ar[i+maxst];
    }

    return 0;
}