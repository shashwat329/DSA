#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    vector<int>amout;
    for(int i =0;i<t;i++){
        int target,sell;
        cin>>target;
        cin>>sell;
        if(target<sell){
            int r1 = target + (sell-target)*2;
            amout.push_back(r1);
        }
        else{
            int r1 = sell;
            amout.push_back(r1);
        }
    }
    for(auto &it: amout){
        // cout<<it<<end;
    }
    return 0;
}