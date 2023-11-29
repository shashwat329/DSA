#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(){
        data = 0;
        next = NULL;
    }
    node(int a){
        data =a;
        next =  NULL;
    }
};
int main(){
   node *n1 = new node(1);
   node *n2 = new node(2);
   node *n3 = new node(3);
   node *n4 = new node(4);
   node *n5 = new node(5);
   n1->next = n2;
   n2->next = n3;
   n3->next = n4;
   n4->next = n5;
   cout<<n1->data<<" "<<n2->data<<" "<<n3->data<<" "<<n4->data<<" "<<n5->data<<endl;
   node * i = n1;
while (i!=NULL){
    cout<<i->data<<" ";
    i = i->next;
}

    return 0;
}