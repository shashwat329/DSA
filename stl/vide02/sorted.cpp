// Given N elements the print all the elements in sorted order
/*
input : 5
1 4 4 2 3
output : 1 2 3 4 4
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    multiset <int> ms;
    for(int i=0;i<n;i++){
        // loop TC is O(n)
        int x;
        cin>>x;
        ms.insert(x); 
        // TC of insert function is logn
    }
      
    // TC of program is O(nlogn)
 for(auto it: ms){
    cout<<it<<" ";
 }
    return 0;
}