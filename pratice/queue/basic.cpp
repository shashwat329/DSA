/*
queue is a linear data structure which operates on FIFO(first in first out)
functions with queue are
push : to add element  
pop : to delete element
front : to print front element
empty :  to tell wheather the queue is empty or not
size : tells the size of the queue
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue <int> q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    cout<<"size of the queue is: "<<q.size()<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    // we are printing the front element of the queue and clearing the front element and then second element takes the place of first element 
    cout<< q.front();
    // as the queue is empty it gave zero as output
    return 0;

} 
