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
        data = a;
        next =NULL;
    }
};
node * takeinput(){
    int data;
    cin>>data;
    node *head =NULL;
    node *tail =NULL;

    while(data!=-1){
        node *n = new node(data);
        if(head == NULL){
            head =n;
            tail=n;
        }
        else{
            tail->next=n;
            tail= n;
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
void deleteNTHnode(node** head, int index) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    if (index < 0) {
        printf("Invalid index.\n");
        return;
    }

    if (index == 0) {
        node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    node* current = *head;
    int count = 0;

    while (current != NULL && count < index - 1) {
        current = current->next;
        count++;
    }

    if (current == NULL || current->next == NULL) {
        printf("Index out of bounds.\n");
        return;
    }

    node* temp = current->next;
    current->next = temp->next;
    free(temp);
}
int main(){
    node * head = takeinput();
    display(head);
    deleteNTHnode(&head,2);
    display(head);

    return 0;
}