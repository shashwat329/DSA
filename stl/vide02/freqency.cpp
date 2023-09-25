// given N elements, print the element that occurs maximum no of times 
/*
input :
5
1 3 3 3 2
output :
3
*/ 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int maxi =0;
    unordered_map<int,int> mpp;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        mpp[x]++;
        if(mpp[x]>mpp[maxi]){
            maxi =x;
        }
    }
cout<<maxi<<endl;
    return 0;
}