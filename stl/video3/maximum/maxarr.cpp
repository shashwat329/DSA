#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,10> arr;
    cout<<"enter the elements of the array: "<<endl;
    for (int i = 0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(auto &it: arr){
        cout<<it<<" ";
    }
    int max = INT_MIN;
    int max_el = *max_element(arr.begin(),arr.end());
    cout<<"maximum element in the array: "<<max_el<<endl;
    return 0;
}