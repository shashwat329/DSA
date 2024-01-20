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
// 10 2 30 41 52 62 -1 17 -1 -1 -1 18 91 -1 -1 -1 -1 120 -1 -1 121 -1 -1

bool isthere(btnode<int>*root,int key){
    if(root == NULL) return false;
    if(key==root->data) return true;
    return isthere(root->left,key)|| isthere(root->right,key);

}
int findmaximum(btnode<int>* root){
    if(root==NULL){
        return INT_MIN;
    }
    int max = root->data;
    int lefttree = findmaximum(root->left);
    int righttree = findmaximum(root->right);
    if(max<lefttree) {
        max = lefttree;
    }
    if(max<righttree){
        max = righttree;
    }
    return max; 
}
void maxvalue(btnode<int> *root,int &ans){
    if(root==NULL) return ;
    ans = max(ans,root->data);
    maxvalue(root->left,ans);
    maxvalue(root->right,ans);
}
int main(){
    btnode<int> * root = takeinput();
    cout<<"inorder traversal of the tree is \n";
    // inorder_traversal(root);
    cout<<isthere(root,25)<<endl;
    cout<<"the maximum in the tree is: "<<findmaximum(root)<<endl; 
    int ans=INT_MIN;
    maxvalue(root,ans);
    cout<<"the other way to find the maximum value is "<<ans<<endl;

    return 0;
}