#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>&q1){
    stack<int> s;
    while(!q1.empty()){
        s.push(q1.front());
        q1.pop();
    }
    while(!s.empty()){
        q1.push(s.top());
        s.pop();
    }
}
int main(){
queue<int> q;
for(int  i= 1;i<=5;i++){
    q.push(i);
}
reverse(q);
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
}