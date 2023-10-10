#include<iostream>
using namespace std;
int lindex(int arr[],int n,int key,int i){
    if(n==0||i==-1){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return lindex(arr,n,key,i-1);
}
int main(){
    int arr[10]={1,2,1,2,4,5,7,5,3,1};
    int ans = lindex(arr,10,2,10);
    cout<<ans<<endl;
    return 0;
}