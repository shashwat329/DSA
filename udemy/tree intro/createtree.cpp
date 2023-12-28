// lets create a tree see generictree file for simpler tree
#include<iostream>
#include<vector>
using namespace std;
template <typename T >
class treenode{
    public:
    T data;
    vector<treenode<T>*> children;
    treenode(T data){
        this->data =data;
    }
};
int main(){
    treenode<int> *root=new treenode<int > (1);

    treenode<int> *rchild1=new treenode<int > (2);
    treenode<int> *rchild2=new treenode<int > (3);
    treenode<int> *rchild3=new treenode<int > (4);

    treenode<int> * rch1child1 =new treenode<int>(5);
    treenode<int> * rch1child2 =new treenode<int>(6);
    treenode<int> * rch1child3 =new treenode<int>(7);

    treenode<int> * rch2child1 =new treenode<int>(8);

    treenode<int> * rch3child1 =new treenode<int>(9);
    treenode<int> * rch3child2 =new treenode<int>(10);

    treenode<int> * rch1ch2child1 =new treenode<int>(11);
    treenode<int> * rch1ch2child2 =new treenode<int>(12);

    treenode<int> * rch3ch1child1=new treenode<int>(13);
    treenode<int> * rch3ch1child2=new treenode<int>(14);

    treenode<int> * rch3ch1ch1child1=new treenode<int>(15);

    treenode<int> * rch3ch1ch1ch1child1=new treenode<int>(16);
    treenode<int> * rch3ch1ch1ch1child2=new treenode<int>(17);
    // lets build connections
    root->children.push_back(rchild1);
    root->children.push_back(rchild2);
    root->children.push_back(rchild3);

    rchild1->children.push_back(rch1child1);
    rchild1->children.push_back(rch1child2);
    rchild1->children.push_back(rch1child3);

    rchild2->children.push_back(rch2child1);

    rchild3->children.push_back(rch3child1);
    rchild3->children.push_back(rch3child2);

    rch1child2->children.push_back(rch1ch2child1);
    rch1child2->children.push_back(rch1ch2child2);

    rch3child1->children.push_back(rch3ch1child1);
    rch3child1->children.push_back(rch3ch1child2);

    rch3ch1child1->children.push_back(rch3ch1ch1child1);
    
    rch3ch1ch1child1->children.push_back(rch3ch1ch1ch1child1);
    rch3ch1ch1child1->children.push_back(rch3ch1ch1ch1child2);





return 0;
}
 
