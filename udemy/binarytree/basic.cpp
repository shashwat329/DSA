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
int main(){
    btnode<int> * root = new btnode<int>(1);
    btnode<int> * left = new btnode<int>(2);
    btnode<int>* right = new btnode<int>(3);
    root->left=left;
    root->right= right;
    return 0;
}