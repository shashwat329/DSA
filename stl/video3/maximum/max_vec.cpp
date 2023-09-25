#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int max_el = *max_element(vec.begin(),vec.end());
    cout<<"the maximum element in the array is : "<<max_el<<endl;
    return 0;
}