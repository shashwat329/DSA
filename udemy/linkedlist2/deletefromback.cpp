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
node* deletell(node* head, int k) {
    // Create two pointers, one and two, both initially pointing to the head
    node* one = head;
    node* two = head;

    // Move the 'two' pointer k nodes ahead
    for (int i = 0; i < k; i++) {
        if (two == NULL) {
            // Handle the case where k is greater than the length of the linked list
            return head;
        }
        two = two->next;
    }

    // If 'two' is now NULL, it means k is equal to the length of the linked list
    if (two == NULL) {
        // Special case: delete the head node
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Move both pointers until 'two' reaches the end of the linked list
    while (two->next != NULL) {
        one = one->next;
        two = two->next;
    }

    // 'one' is now pointing to the node before the node to be deleted
    node* temp = one->next;
    one->next = one->next->next;
    delete temp;

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