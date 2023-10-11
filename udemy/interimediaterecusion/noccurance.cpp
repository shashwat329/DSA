#include<iostream>
using namespace std;
void cindex(int arr[],int n,int key,int i,int &ans){
    int count = 0;
    if(i==n){
        return;
    }
    if(arr[i]==key){
        ans++;
    }
    return cindex(arr,n,key,i+1,ans);
}
int main(){
    int ans=0;
    int arr[10]={1,2,1,2,4,5,7,5,3,1};
     cindex(arr,10,1,0,ans);
    cout<<ans<<endl;
    return 0;
}