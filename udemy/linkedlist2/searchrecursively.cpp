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
bool findelement(node * temp,int key){
    if(temp==NULL) return false;
    if(temp->data == key)return true;
    return findelement(temp->next,key);
}
int main(){
    node * head = takeinput();
    display(head);
    int ans = findelement(head,2);
    if(ans==0){
        cout<<"there is no such element in the linkedlist!"<<endl;
    }
    else{
        cout<<"yes we found the element!!"<<endl;
    }
    return 0;

}