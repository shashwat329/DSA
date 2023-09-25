#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<pair<int,int> > pq;
    pq.push(make_pair(1,2)); 
    pq.push(make_pair(1,3)); 
    pq.push(make_pair(1,4)); 
  pair<int ,int>s = pq.top();
  cout<<s.first<< " and "<<s.second; 
    return 0;
}