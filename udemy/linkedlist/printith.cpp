#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        data =0;
        next = NULL;
    }
     node(int a){
        data =a;
        next = NULL;
    }
};
void display(node * head){
    node * temp = temp;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int print(node * n,int index){
    int count=-1;
    if(index<0){
        return count;
    }
    while(n!=NULL){
        count++;
        if(index == count){
            return n->data;
        }
        n=n->next;
    }
    if(n==NULL){
        return -1;
    }
  return count;
}
node * takeinput(){
    int data;
    cin>>data;
    node *head =NULL;
    node* tail= NULL;
    while(data!=-1){
        node *n = new node(data);
        if(head==NULL){
            head = n;
            tail =n;
        }
        else{
            tail->next = n;
            tail =n;
        }
        cin>>data;
    }
    return head;
}
int main(){
    node * head =takeinput();
    display(head);
    cout<<"\nvalue of data at ith index: "<<print(head,3)<<"\n";
    return 0;
}