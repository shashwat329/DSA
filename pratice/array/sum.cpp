#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    array <int ,5> num;
    for(auto &it: num){
        cin>>it;
        sum = sum+it;
    } 
    cout<<"entered array is ";
     for(auto &it: num){
        cout<<it<<" ";
    } 
    cout<<"\nthe sum of array is "<<sum<<endl;
    return 0;
}