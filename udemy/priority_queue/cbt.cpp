#include<iostream>
using namespace std;
class btnode{
    public:
    int node;
    btnode *leftchild;
    btnode *rightchild;
    static btnode *curr;
    btnode(int n){
        node = n;
        leftchild = NULL;
        rightchild = NULL;

    } 
    void insert(int n){
        btnode* newnode = new btnode(n);

    }
};
int main(){
    btnode n1(2);
    n1.insert(3);
    n1.insert(4);
    return 0;
}