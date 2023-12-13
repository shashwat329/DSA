#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
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
node * removenth(node * head,int k){
    
     node * one=head;
     node* two=head;
     for(int i =0;i<k;i++){
        if (two == NULL) {
            // Handle the case where k is greater than the length of the linked list
            return head;
        }
        two=two->next;
        
     }
       if (two == NULL) {
        // Special case: delete the head node
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
     while(two->next!=NULL){
        two=two->next;
        one=one->next;
     }
     node*temp=one->next;
     one->next=one->next->next;
     delete temp;
     return head;
}
int main(){
    node * head=takeinput();
    display(head);
    head =removenth(head,2);
    display(head);
    
    return 0;
}