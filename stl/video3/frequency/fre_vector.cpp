#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int k;
    cout<<"enter the element : ";
    cin>>k;
    int cnt = count(vec.begin(),vec.end(),k);
    cout<<cnt;
    return 0;
}