#include<iostream>
using namespace std;
class node {
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
    node * head =NULL;
    node * tail=NULL;
    while(data!=-1){
        node * n= new node(data);
        if(head==NULL){
            head = n;
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
void display(node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node* mergesortedll(node* one, node* two) {
    node* head = NULL;
    node* tail = NULL;
    while (one != NULL && two != NULL) {
        if (one->data <= two->data) {
            if (head == NULL) {
                head = one;
                tail = one;
            } else {
                tail->next = one;
                tail = one;
            }
            one = one->next;
        } else {
            if (head == NULL) {
                head = two;
                tail = two;
            } else {
                tail->next = two;
                tail = two;
            }
            two = two->next;
        }
    }

    if (one != NULL) {
        tail->next = one;
    } else if (two != NULL) {
        tail->next = two;
    }

    return head;
}
int main(){
    cout<<"enter the elements of first linkedlist: ";
    node * head1 = takeinput();
    cout<<"enter the elements of first linkedlist: ";
    node * head2= takeinput();
    display(head1);
    cout<<endl;
    display(head2);
    cout<<endl;
    node * head3=mergesortedll(head1,head2);
    display(head3);
    return 0;
}