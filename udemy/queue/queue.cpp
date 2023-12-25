#include<iostream>
using namespace std;
template <typename t> 
class queue{
    t *arr;
    int nextindex;
    int firstindex;  
    int size;
    int capacity;
    public:
    
    queue(int cap){
        arr= new t[cap];
        nextindex =0;
        firstindex =-1;
         capacity=cap;
        size=0;

    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    // inseration
    void push(t ele){
        if(size==capacity){
            cout<<"queue is full"<<endl;
            return;
        }
        if(firstindex==-1){
            firstindex =0;
        }
       arr[nextindex]=ele;
      nextindex = (nextindex+1)%capacity; 
      size++; 
    }
    t front(){
        if(isempty()){
            cout<<"queue is empty!"<<endl;
            return 0;
        }
        return arr[firstindex]; 

    }
    void pop(){
        if(isempty()){
            cout<<"deletion cant be performed!"<<endl;
            return;
        }
        firstindex=(firstindex+1)%capacity;
        size--;
        // this is resetting of the array so tht we can store it in first index 
        if(size==0){
            firstindex=-1;
            nextindex=0;
        }  
    }
    void display(){
        if(size==0){
            cout<<"queue is empty cant display result"<<endl;
            return;
        }
        int i= firstindex;
        if (size==capacity){
            cout<<arr[i]<<" ";
            i = (i + 1) % capacity;
            
        }
        
        
        while(i!=nextindex){
            cout<<arr[i]<<" ";
            i = (i + 1) % capacity;
        }
        cout<<endl;
    }
};
int main(){
    queue<int> q(5);
    q.push(5);
    q.push(7);
    q.push(9);
    q.push(10);
    q.push(20);
    // q.push(60);
    q.display();

q.pop();
q.pop();
q.pop();
q.push(30);
q.push(40);
q.push(50);
q.display();
cout<<q.front()<<" ";

    return 0;
}