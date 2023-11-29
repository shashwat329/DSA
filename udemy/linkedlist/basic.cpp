// creating your own linkedlist
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(){
        data =0;
        next = NULL;
    }
    node(int a){
        data = a;
        next = NULL;
    }
   
};
 void display(node * n){
        while(n!=NULL){
            cout<<n->data<<endl;
            n = n->next;
        }
    }
int main(){
    node n1(1),n2(2),n3(3);
    node *n4 = new node(4);
    node *n5 = new node(5);
    n1.next=&n2;
    n2.next=&n3;
    n3.next=n4;
    n4->next=n5;
    node *head = &n1;
    
    return 0;
}