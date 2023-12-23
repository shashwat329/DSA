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
   if(size==max_size){
    //  queue is full
    cout<<"queue is full so element cant be pushed"<<endl;
   }
   else{
    if(size!=0){
        size++;
        rear++;
        arr[rear]=a;
    }
    if(size==0||front==-1){
        size++;
        front++;
        rear++;
        arr[rear]=a;
    }
   }
   
   }
    void pop(){
       if(size==0){
        cout<<"deletion cant be performed!"<<endl;
       }
       else{
         arr[front]=-1;
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
    queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q1.push(7);
    q1.push(8);
    q1.push(9);
    q1.push(10);
    q1.push(11);



    q1.display();
    cout<<q1.size;
    return 0;
}