#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> twosum;
    int n,x;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>x;
        twosum.push_back(x);
    }
    for(auto &it:twosum){
        cout<<it<<endl;
    }
    auto y = *twosum.begin();
    cout<<"hello world"<<y<<endl;
    cout<<"size of vector is: "<<twosum.size()<<endl;
    return 0;
}
