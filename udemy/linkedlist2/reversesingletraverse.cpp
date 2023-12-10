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
node* deletell(node* head,int k){
    node* one =head;
    node* two= head;
    for(int i =0;i<k;i++){
        two=two->next;
    }
    while(two!=NULL){
        one=one->next;
        two=two->next;
    }
    delete(one);
    return head;
}
int main(){
    node* head = takeinput();
    display(head);
    head =deletell(head,2);
    cout<<endl;
    display(head);
        return 0;
}