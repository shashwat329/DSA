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
void postorder_traversal(btnode<int> *root){
    if(root!=NULL){

        postorder_traversal(root->left);
        postorder_traversal(root->right);
       
    }
    if(root==NULL) return;
}
bool helper(btnode<int> * lefttree,btnode<int>* righttree){
    if(lefttree==NULL&&righttree==NULL) return true;
    if(lefttree ==NULL&& righttree!=NULL) return false;
    if(lefttree !=NULL&& righttree==NULL) return false;
    if(lefttree->data != righttree->data) return false;
    return helper(lefttree->left,righttree->right)&&helper( lefttree->right,righttree->left);
}
bool symmetric(btnode<int> * root){
    if(root==NULL) return true;
    return helper(root->left,root->right);

}
int main(){
    btnode<int> * root = takeinput();
    cout<<"postorder traversal of the tree is \n";
    postorder_traversal(root);
    return 0;
}