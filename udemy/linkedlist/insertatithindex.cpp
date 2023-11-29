#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(){
        data =0;
        next =NULL;
    }
    node(int a){
        data =a;
        next =NULL;
    }

};
node * takeinput( ){
    int data;
    cin>>data;
    node * head =NULL;
    node * tail =NULL;

    while(data!=-1){
        node * n1 = new node(data);
        if(head==NULL){
            head =n1;
            tail=n1;
        }
        else{
            tail->next=n1;
            tail=n1;
        }
        cin>>data;
    }
    return head;
}
void display(node * n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}
void insertith(node * n,int index,int value){
    int count = -1;
    if(index<0){
        cout<<"\nsorry node cant be inserted!!"<<endl;
    }
    while(n!=NULL){
        count++;
        if(count == index){
            node * n1 = new node(value);
            node* temp=n->next;
            n->next =n1;
            n1->next=temp;
            cout<<"\nnode added successfully!!"<<endl;
            break;
        }
        n=n->next;
    }
    if(n==NULL){
        cout<<"\nsorry node cant be inserted!!"<<endl;
    }
}
int main(){
    node *head =takeinput();
    display(head);
    insertith(head,2,100);
    display(head);

    return 0;
}
