#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,10> arr ={1,2,5,5,2,8,6,5,0,3};
    for(auto &it: arr){
        cout<<it<<" ";
    }
    reverse(arr.begin(),arr.end());
    cout<<"\narray after the reverse is \n";
    for(auto &it: arr){
        cout<<it<<" ";
    }
    cout<<"\narray sort the reverse is \n";
    sort(arr.begin(),arr.end());
    for(auto &it: arr){
        cout<<it<<" ";
    }
// note: sorted array before reverse and first reverse and then sorted is same
    return 0;
}