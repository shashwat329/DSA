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
bool searchkey(node * temp,int key){
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp= temp->next;
    }
    return false;
}
int main(){
    node * head = takeinput();
    display(head);
   bool ans = searchkey(head,1);
   cout<<"\n"<<ans<<"\n";

    return 0;

}