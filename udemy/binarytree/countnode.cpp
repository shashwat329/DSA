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
void print_bt(btnode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<": ";
    if(root->left ){
        cout<<"L"<<root->left->data<<" ";
    }
    if(root->right){
        cout<<"R"<<root->right->data;
    }
    cout<<endl;
    print_bt(root->left);
    print_bt(root->right);

}
int main(){
    btnode<int> * root = takeinput();
    print_bt(root);
    return 0;
}