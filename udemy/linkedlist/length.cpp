#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(){
        data=0;
        next = NULL;
    }node(int a){
        data=a;
        next = NULL;
    }
};
void display(node * n){
    while (n!=NULL)
    {
        cout<<n->data<<" ";
        n= n->next;  
    }
    
}
int length(node *n){
    int count=0;
    while(n!=NULL){
        count++;
        n=n->next;
    }
    return count;
}
node * takeinput(){
    int data;
    cin>>data;
    node *head =NULL;
    node *tail =NULL;
    while(data!=-1){
        node * n1 = new node(data);
        if(head == NULL){
            head =n1;
            tail =n1;
        }
        else{
            tail->next = n1;
            tail =n1;
        }
        cin>>data;
    }
    return head;
}
int main(){
    node * head=takeinput();
    display(head);
    cout<<"\n"<<length(head)<<endl;
    return 0;

}