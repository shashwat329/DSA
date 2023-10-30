#include<iostream>
using namespace std;
class stack{
    private:
    // creating a dynamic array
    int *arr;
    int it;
    public:
    stack(){
       arr = new int[5];
       it = 0; 
    }
    stack(int cap){
       arr = new int[cap];
       it = 0; 
    }
    void push(int x){
        arr[it]=x;
        it++;
    }
    void pop(){
        it--;
    }
    void top(){
        cout<<arr[it-1]<<endl;
    }
    int size(){
        return (it);
    }
    bool isempty(){
        if(arr[it]==0){
            return true;
        }
        return false;
    }
};
int main(){
    stack s1,s2,s3;
    // cout<<s1.isempty();
    s1.push(3);
    s1.push(2);
    s1.top();
    // cout<<s1.it<<" ";
    s1.pop();
    s1.top();
    s1.push(22);
    s1.top();
    cout<<s1.size();
    return 0;
}