// a tree consits of a node which have a data and addresses of the their children
#include<iostream>
#include<vector>
using namespace std;
template< typename T> 
class treenode{
    public:
    T data;
    vector<treenode<T> *> children;
    treenode(T data){
        this->data =data;
    }
};
int main(){
    treenode <int>* root = new treenode<int>(1);
    treenode <int>* rchild1 = new treenode<int>(2);
    treenode <int>* rchild2= new treenode<int>(3);
    root->children.push_back(rchild1);
    root->children.push_back(rchild2);

    return 0;
}