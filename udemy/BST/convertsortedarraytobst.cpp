#include<iostream>
using namespace std;
template<typename T>
class btnode{
    public:
    T data;
    btnode<T>* left;
    btnode<T>* right;
    btnode(T data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    ~btnode(){
        delete left;
        delete right;
    }
};
btnode<int>* createbst(int arr[],int s,int e){
    if(s>e){
        return NULL;
    } 
    int mid = (s+e)/2;
    btnode<int>* root= new btnode<int>(arr[mid]);
    root->left = createbst(arr,s,mid-1);
    root->right = createbst(arr,mid+1,e);
    return root;
}
int main(){
    int arr[7];
    for(int i=0;i<7;i++){
        arr[i]=i+1;
    }
    btnode<int>* root=createbst(arr,0,7);
    cout<<root->data<<endl;
}