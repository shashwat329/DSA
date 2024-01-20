#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class btnode{
    public:
    T data;
    btnode<T> * left;
    btnode<T> * right;
    btnode(T data){
        this->data =data;
        left = NULL;
        right = NULL;
    }
    ~btnode(){
        delete left;
        delete right;
    }
};
btnode<int> * takeinput(){
    int rootdata;
    cout<<"enter the root: ";
    cin>>rootdata;
    if(rootdata==-1) return NULL;
    btnode<int> * root = new btnode<int>(rootdata);
    queue<btnode<int>*> q;
    q.push(root);
    while(!q.empty()){
        btnode<int> * f = q.front();
        q.pop();
        int leftchild;
        cout<<"enter the left child of "<<f->data<<": ";
        cin>>leftchild; 
        if(leftchild!=-1){
        btnode<int>*child= new btnode<int>(leftchild);
        q.push(child);
        f->left = child;
        }
        int rightchild;
        cout<<"enter the right child of "<<f->data<<": ";
        cin>>rightchild;
        if(rightchild!=-1){
            btnode<int>*child = new btnode<int>(rightchild);
            q.push(child);
            f->right = child;
        }
    }
    return root;
}
// 1 2 3 4 5 6 -1 7 -1 -1 -1 8 9 -1 -1 -1 -1 10 -1 -1 11 -1 -1
void inorder_traversal(btnode<int> * root){
    if(root!=NULL){
        inorder_traversal(root->left);
        cout<<root->data<<" ";
        inorder_traversal(root->right);
    }
    if(root==NULL) return;
}
bool isthere(btnode<int>*root,int key){
    if(root == NULL) return false;
    if(key==root->data) return true;
    return isthere(root->left,key)|| isthere(root->right,key);

} 
int main(){
    btnode<int> * root = takeinput();
    cout<<"inorder traversal of the tree is \n";
    // inorder_traversal(root);
    cout<<isthere(root,25);
    return 0;
}