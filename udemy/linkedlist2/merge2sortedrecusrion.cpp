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
node * takeinput(){
    int data;
    cin>>data;
    node * head=NULL;
    node * tail=NULL;
    while(data!=-1){
        node * n= new node(data);
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next =n;
            tail=n;
        }
        cin>>data;
    }
    return head;
}
void display(node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node * mergesortll(node * head1,node *head2){
    node * head=NULL;
    if(head==NULL){
        if((head1->data)>(head2->data)){
            head=head2;
        }
        else{
            head=head1;
        }
    }
   if(head1->next==NULL){
    return head1->next=head2;
   }
   if(head2->next==NULL){
    return head2->next=head1;
   }
   if(head1->data>=head2->data){
    head=head2;
    head->next=mergesortll(head1,head2->next);
   }
   if(head2->data>=head1->data){
    head=head1;
    head->next=mergesortll(head1->next,head2);
   }
   return head;
}
int main(){
    node * head1=takeinput();
    node* head2=takeinput();
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    node * head=mergesortll(head1,head2);
    display(head);
    return 0;
}