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
   if (head1 == NULL) {
        return head2;
    }
    else if (head2 == NULL) {
        return head1;
    }
    node* head = NULL;
    node* tail = NULL;
    while (head1 != NULL && head2 != NULL) {
        if (head1->data <= head2->data) {
            if (head == NULL) {
                head = head1;
                tail = head1;
            }
            else {
                tail->next = head1;
                tail = head1;
            }
            head1 = head1->next;
        }
        else {
            if (head == NULL) {
                head = head2;
                tail = head2;
            }
            else {
                tail->next = head2;
                tail = head2;
            }
            head2 = head2->next;
        }
    }
    if (head1 != NULL) {
        tail->next = head1;
    }
    else {
        tail->next = head2;
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