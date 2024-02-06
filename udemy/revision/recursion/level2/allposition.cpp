// create a cpp program to tell all the position of a given number
#include<iostream>
#include<vector>
using namespace std;
void alloccurance(int arr[],int n,int k,vector<int>&v){
    if(n==0)return;
    if(arr[n-1]==k) {
        v.push_back(n-1);
    }
    alloccurance(arr,n-1,k,v);

}
int main(){
    int arr[]={1,2,5,6,3,8,2};
    vector<int> n;
    alloccurance(arr,7,2,n);
    for(int  i=0;i<n.size();i++){
        cout<<n[i]<<" ";
    }
    return 0;
}