#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,4,4,10,10,10};
    auto it = upper_bound(arr,arr+10,4);
    int ind  = it-arr;
    cout<<ind<<endl;
    // this index is pointing the last x's next index
    return 0;
}