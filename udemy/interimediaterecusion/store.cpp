#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void store(int arr[],int n,int key,int i,vector <int> &v){
    if(i==n){
        return;
    }
    if(arr[i]==key){
        v.push_back(i);
    }
    return store(arr,n,key,i+1,v);
    
}
int main(){
    int arr[10]={1,2,1,2,4,5,7,5,3,1};
    vector<int>v;
    store(arr,10,2,0,v);
    for(auto &it: v){
      cout<<it<<" ";
    }
    return 0;
}