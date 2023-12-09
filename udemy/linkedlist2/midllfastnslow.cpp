#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
    }
    node(int a)
    {
        data = a;
    }
};
node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *n = new node(data);
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head=head->next;
    }
}
node* middle(node * head){
    node* slow = head;
    node* fast= head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast){
        return slow->next;
    }
    return slow;
}
int main()
{
    node *head = takeinput();
    display(head);
    cout<<"\n"<<middle(head)->data<<endl;
    return 0;
}