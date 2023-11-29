#include<iostream>
using namespace std;
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        data=0;
        next = NULL;
    }
    node(int a){
        data=a;
        next = NULL;
    }
    void get(){
        cout<<data<<endl;
        cout<<next<<endl;
    }
};
int main(){
    node ll1,ll2(5),ll3(6);
    ll1.next = &ll1;
    ll2.next =&ll2;
    ll1.get();
    ll2.get();
    ll3.get();
    node * head = &ll1;
    // creating elements dynamically
    node *n1 = new node(1);
    node *n2 = new node(2);
    n1->next = n2;
    cout<<n1->data<<endl; 
    return 0;
}