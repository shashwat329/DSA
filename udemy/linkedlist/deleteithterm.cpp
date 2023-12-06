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
        next = NULL;
    }
    node(int a)
    {
        data = a;
        next = NULL;
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
void display(node *n1)
{
    while (n1 != NULL)
    {
        cout << n1->data << " ";
        n1 = n1->next;
    }
}
node *deleteNthterm(node *head, int index)
{
    if(index<0){
        return head;
    }
    if (index == 0 && head)
    {
        cout << "\nelemented deleted successfully!" << endl;
        return head->next;
    }
    node *curr = head;
    int count = 1;
    while (count <= index - 1 && curr != NULL)
    {
        curr = curr->next;
        count++;
    }
    if (curr&&curr->next)
    {
        curr->next = curr->next->next;
        return head;
    }
    return head;
}
int main()
{
    node *head = takeinput();
    display(head);
    head = deleteNthterm(head, 0);
    display(head);
    return 0;
}