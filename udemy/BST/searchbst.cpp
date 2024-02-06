#include<iostream>
#include<queue>
#include<climits>
using namespace std;
template<typename T>
class btnode{
    public:
    T data;
    btnode<T> *left;
    btnode<T> *right;
    btnode(T data){
        this->data=data;
        left =NULL;
        right=NULL;
    } 
    ~btnode(){
        delete left;
        delete right;
    }
};
btnode<int>* createbst(){
    int rootdata;
    cout<<"enter the root data: ";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    btnode<int>*root =new btnode<int>(rootdata);
    queue<btnode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int leftchild,rightchild;
        btnode<int> *f = q.front();
        q.pop();
        cout<<"enter the left child of "<<f->data<<": ";
        cin>>leftchild;
        if(leftchild!=-1){
            f->left=new btnode<int>(leftchild);
            q.push(f->left);
            // root->
        }
        cout<<"enter the right child of "<<f->data<<": ";
        cin>>rightchild;
        if(rightchild!=-1){
            f->right= new btnode<int>(rightchild);
            q.push(f->right);
        }
    }
    return root;
}
void inordertranversal(btnode<int> * root){
    if(root== NULL) return;
    inordertranversal(root->left);
    cout<<root->data<<" ";
    inordertranversal(root->right);
}
bool searchbst(btnode<int>* root, int key) {
    if (root == NULL) return false;
    if (root->data == key) return true;
    if (key > root->data) {
        return searchbst(root->right, key);
    }
    else {
        return searchbst(root->left, key);
    }
}

int minbst(btnode<int>* root) {
    if (root == NULL) return INT_MAX;
    if (root->left == NULL) return root->data;
    return minbst(root->left);
}

int maxbst(btnode<int>* root) {
    if (root == NULL) return INT_MIN;
    if (root->right == NULL) return root->data;
    return maxbst(root->right);
}
int rangesum(btnode<int>* root,int l,int h){
    int sum =0;
    if(root==NULL){
        return 0;
    }
    return sum;
}
int main(){
    btnode<int> *root = createbst();
    inordertranversal(root);
    cout<<endl;
    cout<<searchbst(root,3)<<endl;
    cout<<maxbst(root)<<endl;
    cout<<minbst(root)<<endl;
    return 0;
}