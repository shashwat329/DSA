#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,4,4,10,10,10};
    bool res = binary_search(arr,arr+10,2);
    cout<<res<<endl;
    return 0;
}