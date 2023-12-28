#include<iostream>
using namespace std;
template<typename T>
class node{
    public:
    T data;
    node<T>* next;
    public:
    node(T a){
        data = a;
    }
};
template<typename T>
class queue{
    node<T>* head;
    node<T>* tail;
    int size;
    public:
    queue(){
        head =NULL;
        tail =NULL;
        size =0;
    }
    public:
    void push(T a){
        node<T> *n=new node<T>(a);
        if(size==0){
            head = n;
            tail =n;
            size++;
        }
        else{
        tail->next =n;
        tail = n;
        size++;
        }
       
    }
    void pop(){
        if(size==0){
            cout<<"queue is empty!"<<endl;
        }
        else{
            node<T> * temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            size--;
        }
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
   T front(){
        return head->data;
     }
     void display(){
        if(size == 0){
            cout<<"queue is empty!"<<endl;
        }
        else{
            node<T>* j= head;
            while(j!=NULL){
                cout<<j->data<<" ";
                j=j->next;
            }
            cout<<endl;
        }
     }
    
};
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    cout << "size of the array is " << q.getsize() << endl;
    q.display();
    q.pop();
    q.pop();
    q.pop();

q.display();
q.push(10);
q.push(11);
q.display();
    cout << "size of the array is " << q.getsize() << endl;
    return 0;
}