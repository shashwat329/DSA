#include<iostream>
using namespace std;
template<typename T>
class btnode{
    public:
    T data;
    btnode<T>* left;
    btnode<T>* right;
    btnode( T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~btnode(){
        delete left;
        delete right;
    }
};
void print_bt(btnode<int> *root){
    if(root ==NULL) return;
    cout<<root->data<<" ,";
    print_bt(root->left); 
    print_bt(root->right); 

}
btnode<int> * takeinput(){
    int nodedata;
    cout<<"enter the data: ";
    cin>>nodedata;
    // input is taken
    if(nodedata ==-1){
        return 0;
    }
    // checked input is not =-1
    btnode<int>* root = new btnode<int>(nodedata);
    btnode<int> *leftchild = takeinput();
    btnode<int>* rightchild = takeinput();
    root->left=leftchild;
    root->right = rightchild;
    return root;
}
void print_bt1(btnode<int>* root){
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
    print_bt1(root->left);
    print_bt1(root->right);

}
int main(){
    
    btnode <int>* root = takeinput();
    print_bt1(root);
    return 0;
}