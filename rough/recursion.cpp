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
bool findnode(treenode<int>* root,int key){
    if(root ==NULL) return false;
    if(root->data ==key) return true;
    return findnode(root->left,key)||findnode(root->right,key);
    
    
}
int mini(treenode<int>* root){
   if (root == NULL) {
        return INT_MAX;
    }

    int minimumVal = root->data;

    int left = mini(root->left);
    int right = mini(root->right);

    if (left < minimumVal) {
        minimumVal = left;
    }

    if (right < minimumVal) {
        minimumVal = right;
    }

    return minimumVal;
}
int main(){
    treenode<int>* root = takeinput();
    bool ans = findnode(root,5);
    cout<<ans<<endl;
    cout<<mini(root)<<endl;
    return 0;
}