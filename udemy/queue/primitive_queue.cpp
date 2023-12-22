#include<iostream>
#define max_size 10
using namespace std;

class queue{
    public:
    int arr[max_size];
    int front =-1;
    int rear=-1;
    int size =0;
    void push(int a){
        if(front<=rear){
        if(front ==-1){
            front++;
        }
        rear++;
        size++;
        arr[rear]=a;
    }
    }
    void pop(){
       if(size==0){
        cout<<"deletion cant be performed!"<<endl;
       }
       else{
        front++;
        size--;
       }
    }
    void display(){
        for(int i = front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main(){
    return 0;
}