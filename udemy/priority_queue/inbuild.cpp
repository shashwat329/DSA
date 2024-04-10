#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;//this is max priority queue syntax
    pq.push(1);
    pq.push(4);
    pq.push(23);
    pq.push(11);
    pq.push(100);
cout<<"the height number is "<<pq.top()<<endl;
while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
    return 0;
}