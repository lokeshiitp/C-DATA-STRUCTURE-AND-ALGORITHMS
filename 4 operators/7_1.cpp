#include<iostream>
using namespace std;

int main(){
    int rating                                                                                                    ;
    cout<<"Enter your rating as(1-5): ";
    cin>>rating;
    switch (rating)
    {
    case 1:
        cout<<"*"<<endl;
        break;
    case 2:
        cout<<"**"<<endl;
        break;
    case 3:
        cout<<"***"<<endl;
        break;
    case 4:
        cout<<"****"<<endl;
        break;
    case 5:
        cout<<"*****"<<endl;
        break;
    default:
        cout<<"again give right rating"<<endl;
        break;
    }
    return 0;
}
