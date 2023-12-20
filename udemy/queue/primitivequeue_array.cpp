#include<iostream>
#define max_size 10
using namespace std;
class queue{
    public:
    int arr[max_size];
    int front = -1;
    int rear = -1;
    void enqueue(int data){
        if(front == -1){
            front=0,rear=0;
            arr[rear]=data;
            rear++;
        }
        else if(rear==max_size){
            cout<<"sorry queue is full!"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void dequeue(){
         for(int i=front;i<rear;i++){
            arr[i]=arr[i+1];
        }
        rear--;
    }
    void display(){
        for(int i =front;i<rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    } 
};
int main(){
    int data;
    queue q1,q2;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);
    q1.enqueue(6);
    q1.enqueue(7);
    q1.enqueue(8);
    q1.enqueue(9);
    q1.enqueue(10);
    q1.enqueue(11);


   
    q1.display();
    q1.dequeue();
    q1.display();
    q1.enqueue(11);
    // q1.enqueue(12);
    q1.display();

    q2.enqueue(8);
    q2.enqueue(5);
    q2.enqueue(2);
    q2.enqueue(1);
    q2.enqueue(3);
    q2.enqueue(4);
    q2.enqueue(6);
    q2.enqueue(7);
    // q2.display();



    return 0;
}