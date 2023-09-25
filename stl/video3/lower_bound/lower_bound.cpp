#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,4,4,10,10,10
    };
    auto it = lower_bound(arr,arr+10,10);
    int ind  = it-arr;
    cout<<"its is the index of the when 10 is present in the array : "<<ind<<endl;
    // this index is pointing the x's first index
    auto it1 = lower_bound(arr,arr+10,5);
    int ind1  = it1-arr;
    cout<<"its is the index of the when 5 not is present in the array : "<<ind1<<endl;
    return 0;
}
