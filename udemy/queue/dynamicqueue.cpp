#include<iostream>
using namespace std;
template<typename t>
// creating a dynamic queue
class queue{
    t *arr;
    int firstindex;
    int nextindex;
    int capacity;
    int size;
    public:
    queue(int cap){

        capacity= cap;
        arr = new t[capacity];
        firstindex =-1;
        nextindex=0;
        size =0;
    }
    void push(t a){
        // empty queue
        if(size==0){
            firstindex++;
            arr[nextindex]=a;
            nextindex=(nextindex+1)%capacity;
            size++;
        }

        if(nextindex==capacity){
            t *temp_arr;
            int i=firstindex;
            temp_arr = new t [capacity];
            int j= firstindex;
        while(j!=nextindex){
            temp_arr[i]=arr[j];
            j = (j + 1) % capacity;
            i++;
        }
        temp_arr[i]=arr[j];
        delete[] arr;
            capacity=capacity*2;
            arr=new t[capacity];
            for(int i =0;i<capacity/2;i++){
                arr[i]=temp_arr[i];
            }
            firstindex =0;
            nextindex=capacity/2;            
            arr[nextindex]=a;
            nextindex=(nextindex+1)%capacity;
            size++;
        }
        else{
        arr[nextindex]=a;
        nextindex=(nextindex+1)%capacity;
        size++;
        }

        
    }
    void pop(){
        if(size==0){
            cout<<"sorry the queue is empty so pop function cant be applied!!"<<endl;
            return;
        }
        else{
            firstindex=(firstindex+1)%capacity;
            size--;
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
    int front(){
        return arr[firstindex];
    }
    int getsize(){
        return size;
    }
};

int main(){
    queue<int>q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    
    cout<<q.front()<<endl;
    // q.pop();
    cout<<q.front()<<endl;
cout<<"size of the array is "<<q.getsize()<<endl;
    q.display();
    return 0;
}