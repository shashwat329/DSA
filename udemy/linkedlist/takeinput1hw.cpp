#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int a){
        data = a;
        next = NULL;
    }
    node(){
        data =0;
        next = NULL;
    }
   
};
node * takeinput(){
    int data;
    cin>>data;
    node* head =NULL;
    node* tail = NULL;
    while(data!=-1){
        node * n = new node(data);
        if(head == NULL){
            head =n;
            tail = n;
        }
        else{
            n->next = head;
            head = n;

        }
        cin>>data;
    }
    return head;
}
 void display(node* n1){
        while(n1!=NULL){
            cout<<n1->data<<" ";
            n1= n1->next;
        }
    }
int main(){
    node* head=takeinput();
    display(head);
    return 0;
}