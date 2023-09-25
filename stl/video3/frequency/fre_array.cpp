#include<bits/stdc++.h>
#define size 5
using namespace std;
int main(){
    cout<<"enter 10 elements in the array: ";
    array<int,10>arr;
    for(int i =0;i<10;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the element: ";
    cin>>k;
    int cnt = count(arr.begin(),arr.end(),k);
    cout<<cnt<<endl;
    return 0;
}