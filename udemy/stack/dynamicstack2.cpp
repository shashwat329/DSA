#include<iostream>
using namespace std;
class stack{
    vector<int> v;
    public:
    stack(){
    }
    stack(int x){
        v[x];
    }
    void push(int x){
        v.push_back(x);
    }
    void pop(){
        v.pop_back();
    }
    int size(){
        return v.size();
    }
    void top(){
        cout<<v.back();
    }
};
int main(){
    stack s1,s2;
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.top();
    return 0;
}