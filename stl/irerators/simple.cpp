#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int, 3> arr = {1,2,3};
    for(auto it= arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"for each "<<endl;
    string s = "shashwat";
    for (auto it11 :s)
    {
        cout<<it11<<" ";
    }
    
    return 0;
}