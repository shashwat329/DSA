#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
   vec.push_back(1);
   vec.push_back(3);
   vec.push_back(5);
   vec.push_back(4);
    vec.push_back(6);
    for (auto &it: vec){
        cout<<it<<" ";
    }
    cout<<"\n";
    reverse(vec.begin(),vec.end());
    for (auto &it: vec){
        cout<<it<<" ";
    }
    return 0;
}