#include<iostream>
using namespace std;
void store(int arr[],int n,int key,int i){
    vector<int> v;
    if(i==n){
        return;
    }
    if(arr[i]==key){
        v.push_back(i);
    }
    return store(arr,n,key,i+1);
    
}
int main(){
    int arr[10]={1,2,1,2,4,5,7,5,3,1};
    store(arr,10,1,0);
    //  cout<<ans<<endl;
    // for(int i =0;i<v.size();i++){

    // }

    return 0;
}