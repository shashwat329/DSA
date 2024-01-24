// find the min element in the binary tree
#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class treenode{
    public:
    T data;
    treenode<T>* left;
    treenode<T>* right;
    treenode(){
        data = 0;
        left = NULL;
        right = NULL;
    }
    treenode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~treenode(){
        delete left;
        delete right;
    }

};
treenode<int>* takeinput(){
    int rootdata;
    cout<<"enter the root: ";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    treenode<int>* root = new treenode<int>(rootdata);
    queue<treenode<int>*>q;
    q.push(root);
    while(!q.empty()){
        int childleft;
        int childright;

        treenode<int>* f = q.front();
        q.pop();
        cout<<"enter the left child of "<<f->data<<" : ";
        cin>>childleft;
        if(childleft!=-1){
        f->left = new treenode<int>(childleft);
        q.push(f->left);
        }
        cout<<"enter the right child of "<<f->data<<" : ";
        cin>>childright;
        if(childright!=-1){
        f->right = new treenode<int>(childright);
        q.push(f->right);
        }

    }
    return root;
}
void printtree(treenode<int>* root){

// 25 15 30 10 20 28 33 15 7 11 22 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
}
int minimum_element(treenode<int>* root){
    if(root==NULL) return -1;
    while(root->left!=NULL){
        root=root->left;
    }
    return root->data;
}
int main(){
    treenode<int>* root = takeinput();
    cout<<"min value in this tree is :"<<minimum_element(root)<<endl;
    return 0;
}