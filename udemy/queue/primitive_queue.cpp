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
    if(size==0){
        front++;
        size++;
        rear++;
        arr[rear]=a;
    }
    else{
        if(rear==max_size-1){
            rear=-1;
        }
        rear++;
        arr[rear]=a;
        size++;
    }
   }
   
}
    void pop(){
       if(size==0){
        cout<<"deletion cant be performed!"<<endl;
        front=-1;
        rear=-1;
       }
       else{
        front= (front+1)%max_size;
        size--;
       }
    }
void display() {
    if (size == 0) {
        cout << "Queue is empty!" << endl;
        return;
    }

    int i = front;
    int count = 0;

    do {
        cout << arr[i] << " ";

        if (i == max_size - 1) {
            i = 0;
        } else {
            i = (i + 1) % max_size;
        }

        count++;
    } while (count < size);

    cout << endl;
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
    // q1.push(11);
    // cout<<"currently front is in the index: "<<q1.front<<endl;



    q1.display();
    // cout<<q1.size<<endl;
    q1.pop();

    // cout<<"currently front is in the index: "<<q1.front<<endl;
    q1.display();
    q1.push(11);
    q1.display();
    q1.pop();
    q1.pop();
    q1.display();
    q1.push(12);
    q1.push(13);
    q1.push(14);

    q1.display();


    // cout<<"currently front is in the index: "<<q1.front<<endl;

    return 0;
}