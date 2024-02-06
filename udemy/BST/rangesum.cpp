// create a program in bst to find all the elements smaller than L
#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class btnode
{
public:
    int data;
    btnode<T> *left;
    btnode<T> *right;
    btnode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~btnode()
    {
        delete left;
        delete right;
    }
};
btnode<int> *createbst()
{
    int rootdata;
    cout << "enter the root data: ";
    cin >> rootdata;
    if (rootdata == -1)
    {
        return NULL;
    }
    btnode<int> *root = new btnode<int>(rootdata);
    queue<btnode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        int leftchild, rightchild;
        btnode<int> *f = q.front();
        q.pop();
        cout << "enter the left child of " << f->data << ": ";
        cin >> leftchild;
        if (leftchild != -1)
        {
            f->left = new btnode<int>(leftchild);
            q.push(f->left);
            // root->
        }
        cout << "enter the right child of " << f->data << ": ";
        cin >> rightchild;
        if (rightchild != -1)
        {
            f->right = new btnode<int>(rightchild);
            q.push(f->right);
        }
    }
    return root;
}
void inordertranversal(btnode<int> *root)
{
    if (root == NULL)
        return;
    inordertranversal(root->left);
    cout << root->data << " ";
    inordertranversal(root->right);
}
int rangesum(btnode<int> *root, int L, int H)
{
    int sum = 0;
    if (root == NULL)
    {
        return sum;
    }
    if (root->data >= L && root->data <= H)
    {
        sum += root->data;
    }
    sum += rangesum(root->left, L, H);
    sum += rangesum(root->right, L, H);
    return sum;
}
// 10 5 20 4 7 15 22 3 6 -1 -1 11 17 21 25
int main()
{
    int l, h;
    btnode<int> *root = createbst();
    cout << "enter the low: ";
    cin >> l;
    cout << "enter the high: ";
    cin >> h;
    cout << "the sum of all element of bst bewteen " << l << " and " << h << " is " << rangesum(root, l, h);

    return 0;
}