#include<iostream>
#include<queue>
using namespace std;
template<typename T>
class btnode{
    public:
    T data;
    btnode<T>* left;
    btnode<T>* right;
    btnode(T data){
        this->data= data;
        left = NULL;
        right= NULL;
    }
    ~btnode(){
        delete left;
        delete right;
    }
};
btnode<int>* takeinput(){
    int rootdata;
    cout<<"enter the root: ";
    cin>>rootdata;
    if(rootdata==-1){
        return NULL;
    }
    btnode<int>* root = new btnode<int>(rootdata);
    queue<btnode<int>*>q;
    q.push(root);
    while(!q.empty()){
        int childleft;
        int childright;

        btnode<int>* f = q.front();
        q.pop();
        cout<<"enter the left child of "<<f->data<<" : ";
        cin>>childleft;
        if(childleft!=-1){
        f->left = new btnode<int>(childleft);
        q.push(f->left);
        }
        cout<<"enter the right child of "<<f->data<<" : ";
        cin>>childright;
        if(childright!=-1){
        f->right = new btnode<int>(childright);
        q.push(f->right);
        }

    }
    return root;
}
int rangeSum(btnode<int>* root,int l, int h){
    int sum = 0;
    if( root == NULL) return sum;
    if(root->data>=l&&root->data<=h){
        sum = sum+root->data;
    }
    sum+=rangeSum(root->left,l,h);
    sum+=rangeSum(root->right,l,h);
    return sum;
}
bool validateBST(btnode<int>* root){
    if(root ==NULL) return true;
    if(root->left!=NULL){
        if(root->left->data<root->data){

        };
    }

}
// 10 5 15 3 7 13 18 1 -1 6 -1 -1 -1 -1 -1 -1 -1 -1 -1
int main(){
    btnode<int>* root = takeinput();
    int ans = rangeSum(root,6,10);
    cout<<ans<<endl;
    return 0;
}