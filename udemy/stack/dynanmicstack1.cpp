// dynamic stack using array
#include<iostream>
using namespace std;
class stack{
    private:
    int *arr;
    int capacity;
    public:
    int it;
    stack()
    {   capacity =4;
        arr = new int[capacity];
        it = -1;
    }
    stack(int cap){
         capacity = cap;
        arr = new int[capacity];
        it  = -1;
    }

     void push(int x){
      if (it == capacity-1) {
        // Double the capacity if the stack is full
        int newCapacity = 2 * capacity;
        int* newArr = new int[newCapacity];
        for (int i = 0; i < capacity; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }

    it++;
    arr[it] = x;
    }
    bool isempty(){
        if(arr[it]==0){
            return true;
        }
        return false;
    }
    void pop(){
        if(it==0){
            cout<<"stack underflow!"<<endl;
        }
        else{
        it--;
        }
    }
    void top(){
        cout<<arr[it-1]<<endl;
    }
    int size(){
        return (it);
    }
    
};

int main(){
    stack s1,s2,s3;
    stack s4(10);
    s4.push(1);
    s4.top();
    s4.push(2);
    s4.top(); 
    s4.push(3);
    s4.top();
    s4.push(4);
    s4.top();   
    s4.push(5);
    s4.top();
    s4.push(6);
    s4.top();
    s4.push(7);
    s4.top();
    s4.push(8);
    s4.top();
    s4.push(9);
    s4.top();
    s4.push(10);
    s4.push(11);
    s4.push(12);
    s4.push(13);

    cout<<s4.size();
    return 0;
}