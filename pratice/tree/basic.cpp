// create a basic tree 
// date9jan
#include<iostream>
#include<vector>
using namespace std;
template <typename T > 
class treenode{
    public:
    T data;
    vector<treenode<T>*>children;
    treenode(T data){
        this->data = data;
    }
};
void printtree(treenode<int> *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<": ";
    for(int i =0;i<root->children.size();i++){
        cout<<root->children[i]->data
        <<", ";
    }
    cout<<endl;
    for(int i =0;i<root->children.size();i++){
        printtree(root->children[i]);
    }
}
treenode<int>* takeinput(){
    treenode<int>* n;
    cout<<"enter the root of the treee: ";
    cin>>n;
    cout<<"enter the children of root";
    for()
}
int main(){
    // create all the required treenodes
    treenode<int>* root = new treenode<int>(1);
    treenode<int>*rchild1 = new treenode<int>(2);
    treenode<int>*rchild2 = new treenode<int>(3);
    treenode<int>*rchild3 = new treenode<int>(4);
    treenode<int>*rchchild1 = new treenode<int>(5);
    // make the connection 
    root->children.push_back(rchild1);
    root->children.push_back(rchild2);
    root->children.push_back(rchild3);
    rchild1->children.push_back(rchchild1);
    printtree(root);
    return 0;
}
