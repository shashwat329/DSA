#include<iostream>
#include<vector>
#include<queue>
using namespace std;
template<typename T>
class treenode{
    public:
    T data;
    vector<treenode<T>*>children;
    treenode(T data){
        this->data = data;
    }
};
treenode<int> * takeinputlevelwise(){
    int rootdata;
    cout<<"enter the root: ";
    cin>>rootdata;
    treenode<int> * root = new treenode<int>(rootdata);
    queue<treenode<int>*>q;
    q.push(root);
    while (!q.empty())
    {
        treenode<int>*f = q.front();
        q.pop();
        int n;
        cout<<"enter the number of children of "<<f->data<<endl;
        cin>>n;
        for(int  i=1;i<=n;i++){
            int childdata;
            cout<<"enter "<<i<<" th child of "<<f->data<<endl;
            cin>>childdata;
            treenode<int>* child = new treenode<int>(childdata);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
    
}
void printtree(treenode<int> * root){
    if(root==NULL){
        return;
    }
    queue<treenode<int>*> q;
    q.push(root);
    while(!q.empty()){
        cout<<q.front()->data<<": ";
        for (int i = 0; i < q.front()->children.size(); i++)
        {
            q.push(q.front()->children[i]);
            cout<<q.front()->children[i]->data<<",";
        }
        cout<<endl;
        q.pop();
    }
}
int main(){
    treenode<int>* root = takeinputlevelwise();
    printtree(root);
    return 0;
}