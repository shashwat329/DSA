#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> ls;
    ls.push_front(5);
    ls.push_front(4);
    ls.push_front(3);
    ls.push_front(2);
    ls.push_front(1);
cout<<"the size of list: "<<ls.size()<<endl;
cout<<ls.front()<<"\n";
ls.pop_front();
cout<<ls.front()<<"\n";
ls.pop_front();
ls.remove(3);
cout<<ls.front()<<"\n";
cout<<"the size of list: "<<ls.size();
    return 0;
}