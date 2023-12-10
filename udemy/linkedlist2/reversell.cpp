#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(){
        data=0;
    }
    node(int a){
        data=a;
    }
};
node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL;
    node* tail=NULL;
    while(data!=-1){
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
void display(node* temp){
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
node* reverse(node* head){
    if(head==NULL||head->next==NULL) return head;
    
    node * prev= head;
    node* curr =head->next;
    node* nxt= head->next->next;
    prev->next=NULL;
    while(nxt!=NULL){
        curr->next=prev;
        prev=curr;
        curr=nxt;
        nxt=curr->next;
    }
    curr->next=prev;
    head=curr;
    return head;
}
int main(){
    node* head = takeinput();
    display(head);
    head= reverse(head);
    cout<<endl;
    display(head);
        return 0;
}