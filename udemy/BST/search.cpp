// create a binary tree and implement binary search tree 
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
        treenode<int>*child = new treenode<int>(childleft);
        q.push(child);
        }
        cout<<"enter the right child of "<<f->data<<" : ";
        cin>>childright;
        if(childright!=-1){
        treenode<int>*child = new treenode<int>(childright);
        q.push(child);
        }

    }
    return root;
}
void printtree(treenode<int>* root){

}
// input : 25 15 30 10 20 28 33 5 7 22 -1 -1 -1 -1
bool searchbst(treenode<int>* root,int k){
    if(root ==NULL){
        return false;
    }
    if(k== root->data){
        return true;
    }
    if(k>root->data){
        searchbst(root->right,k);
    }
    if(k<root->data){
        searchbst(root->left,k);
    }
    return false;
}
int main(){
    treenode<int>* root = takeinput();
    bool ans = searchbst(root,10);
    if(ans==true){
        cout<<"we find the node in binary search tree";
    }
    else{
        cout<<"sorry element not found!";
    }

    return 0;
}