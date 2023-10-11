#include<iostream>
using namespace std;
int cindex(int arr[],int n,int key,int i){
    int count = 0;
    if(i==n){
        return 0;
    }
    if(arr[i]==key){
        return 1+ cindex(arr,n,key,i+1);
    }else{
    return cindex(arr,n,key,i+1);
    }
}
int main(){
    int arr[10]={1,2,1,2,4,5,7,5,3,1};
     int ans = cindex(arr,10,1,0);
     cout<<ans<<endl;
    return 0;
}