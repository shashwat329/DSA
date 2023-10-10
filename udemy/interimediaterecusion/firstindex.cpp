#include<iostream>
using namespace std;
int findex(int arr[],int n,int key,int i){
    if(n==0||i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    int check = findex(arr,n,key,i+1);
    return check;
   
}
int main(){
    int arr[10]={1,2,3,1,3,4,5,8,1,9};
    int ans = findex(arr,10,11,0);
    cout<<ans<<endl;
    return 0;
}