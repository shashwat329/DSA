#include<bits/stdc++.h>
using namespace std;
int main(){
    // for array
    array<int,5> arr;
    for(auto &it: arr){
        cin>>it;
    }
    sort(arr.begin(),arr.end());
    cout<<"sorting in array is: ";
    for(auto &it:arr){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"sorting for vector: ";
    vector <int> vec(5);
    for(auto &it1:vec){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(auto &it1:vec){
       cout<<it1<<" ";
    }
    
    
    
    return 0; 
}