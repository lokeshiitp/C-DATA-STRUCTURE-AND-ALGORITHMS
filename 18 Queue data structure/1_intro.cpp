// operations in queue
#include<iostream>
using namespace std;
#define n 100

class Queue{
    int* ar;
    int front;
    int back;

    public:
    Queue(){
        ar=new int[n];
        front=-1;
        back=-1;
    }
// enqueue(int x) function
    void push(int x){
        if(back==n-1){
            cout<<"queue overflow no space"<<endl;
            return;
        }
        back++;
        ar[back]=x;

        if(front==-1){
            front++;
        }
    }

    //dequeue() function
    void pop(){
        if(front==-1 || front>back){
            cout<<"no elements in queue"<<endl;
            return;
        }

        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"no elements in queue"<<endl;
            return -1;
        }
        return ar[front];
    }

    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();

    cout<<q.empty()<<endl;


    return 0;
}