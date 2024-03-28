// input:- 1,2,3,2,1,5,4,1,3
// output:- 1,2,3,5,4
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int arr[]={1,5,2,4,4,3,3,6,7,1,1,2};
    unordered_map <int,bool> mp ;
    for(int i =0;i<12;i++){
        if(mp.count(arr[i])==0){
            mp[arr[i]]=true;
            v.push_back(arr[i]);
        }
    }
    for(int i=0 ;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}