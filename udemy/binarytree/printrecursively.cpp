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
void print_bt1(btnode<int>* root){
    if(root==NULL){
        return ;
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
    btnode<int> * root = new btnode<int>(1);
    btnode<int> * left = new btnode<int>(2);
    btnode<int>* right = new btnode<int>(3);
    root->left=left;
    root->right= right;
    print_bt(root);
    cout<<endl;
    print_bt1(root);

    return 0;
}