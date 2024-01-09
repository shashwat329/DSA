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
void printtree(treenode<int>*root){
    if(root==NULL){
        // this is a edge case not base case leafnodes act as basecase
        // if root is not null it will never be excuited
        return ;
    }
    cout<<root->data<<": ";
    for(int i=0;i<root->children.size();i++){
        cout<<root->children[i]->data<<" , ";
    }
    cout<<endl;
     for(int i=0;i<root->children.size();i++){
        printtree(root->children[i]);
    }
}
void takeinput(){
    // return treenode root; 

}
int main(){
    treenode <int>* root = new treenode<int>(1);
    treenode <int>* rchild1 = new treenode<int>(2);
    treenode <int>* rchild2= new treenode<int>(3);
    root->children.push_back(rchild1);
    root->children.push_back(rchild2);
printtree(root);

    return 0;
}
// 