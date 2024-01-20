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
void inorder_traversal(btnode<int> * root){
    if(root!=NULL){
        inorder_traversal(root->left);
        cout<<root->data<<" ";
        inorder_traversal(root->right);
    }
    if(root==NULL) return;
}

int countnode(btnode<int>* root){
    if(root==NULL){
        return 0;
    }
    return 1+countnode(root->left)+countnode(root->right);
}
int countleafnode(btnode<int>* root){
    
    if(root==NULL)return 0;
    if(root->left==NULL&& root->right==NULL){
        return 1;
    }
    return countleafnode(root->left)+countleafnode(root->right);
}

int main(){
    btnode<int> * root = takeinput();
    cout<<"the inorder tranversal of the tree is "<<endl;
    inorder_traversal(root);
    cout<<"\nTotal number of node are: "<<countnode(root)<<endl;
    cout<<"Total number of leaf-node are: "<<countleafnode(root)<<endl;
    return 0;
}