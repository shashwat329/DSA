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
        data = a;
        next = NULL;
    }


};
node* takeinput(){
    int data;
    cin>>data;
    node* head =NULL;
    node* tail =NULL;
    while(data!=-1){
        node * n=new node(data);
        if(head ==NULL){
            head =n;
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
void display(node * temp){
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}
int length(node* head){
    int count=0;
    if(head ==NULL){
        return count;
    }
    if(head->next==NULL){
        count++;
        return count;
    }
    count++;
    return count+length(head->next);
}
int length2(node * head){
    if(head==NULL) return 0;
    return 1+length2(head->next);
}
int main(){
    node * head = takeinput();
    display(head);
    cout<<"\nlength of linkedlist is "<<length(head)<<endl;
    cout<<"length of linkedlist is "<<length2(head)<<endl;

    return 0;

}