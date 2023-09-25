#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of element: ";
    cin>>n;
    vector<int>vec;
    cout<<"enter the elements of the vector : ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<"vector before sort is : ";
    for(auto &it: vec){
        cout<<it<<" ";
    }
    sort(vec.begin(),vec.end());
    cout<<"\nvector after sort is : ";
    for(auto &it: vec){
        cout<<it<<" ";
    }
    return 0;
}
