#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
   for(int i=0;i<5;i++){
    q.push(i);
   }
   while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
   q.push(10);
   q.push(20);

   cout<<"\n"<<q.front()<<endl;
    while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
   }
    return 0;
}