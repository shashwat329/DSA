#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(){
        data =0;
        next=NULL;
    }
    node(int a){
        data=a;
        next=NULL;
    }
};
node * takeinput(){
    int data;
    cin>>data;
    node * head=NULL;
    node * tail=NULL;
    while(data != -1){
        node * n= new node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
void display(node * temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}
// return the mid data of the linkedlist
// if ll is odd then return the mid of the ll if its even then return 2nd element of the mid
int middlell(node * temp){
    if(temp==NULL)return -1;
    node *p=temp;
    node *q=temp;
    // p=p->next;
    while(p->next!=NULL){
       p=p->next;
      if(p->next!=NULL){
        p=p->next;
        q=q->next;
      }
      else{
        q=q->next;
      }
    }
    return q->data;
}
int main(){
    node * head=takeinput();
    display(head);
    cout<<"middle of the this linkedlist is "<<middlell(head)<<endl;
    return 0;
    }