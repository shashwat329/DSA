#include<iostream>
using namespace std;

template<typename T>
class btnode{
public:
    T data;
    btnode<T>* left;
    btnode<T>* right;
    btnode(T data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~btnode(){
        delete left;
        delete right;
    }
};

class bst{
private:
    btnode<int>* root;

    void printtree(btnode<int>* root){
        if(root == NULL){
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
        printtree(root->left);
        printtree(root->right);
    }

    bool hasdata(btnode<int> * node, int data){
        if(node == NULL){
            return false;
        }
        if(node->data == data){
            return true;
        }
        return hasdata(node->left, data) || hasdata(node->right, data);
    }

    btnode<int>* insert(btnode<int>* root, int data){
        if(root == NULL){
            btnode<int>* temp = new btnode<int>(data);
            return temp;
        }
        if(root->data > data){
            root->left = insert(root->left, data);
        }
        else{
            root->right = insert(root->right, data);
        }
        return root;
    }

public:
    bst(){
        root = NULL;
    }

    void insert(int data){
        root = insert(root, data);
    }

    bool hasdata(int ans){
        return hasdata(root, ans);
    }

    void print(){
        printtree(root);
    }
};

int main(){
    bst b;
    b.insert(10);
    b.insert(5);
    b.insert(20);
    b.insert(7);
    b.insert(3);
    b.insert(15);
    b.print();

    return 0;
}
