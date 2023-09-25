// Remove duplicates from an integer array.
#include<bits/stdc++.h>
using namespace std;
int main(){
// declaration of array
    array <int ,10> arr;
    vector<int> duplicate;
    cout<<"enter the array: ";
    // taking array as input
    for(auto &it: arr){
        cin>>it;
    }
// displaying the entered array
    cout<<"entered array is before sorting is  ";
    for(auto &it: arr ){
        cout<< it<<" ";
    }
    // this is a sort algogrithm to arrange it in simple ascending order
    sort(arr.begin(),arr.end());
    // displat of the array after being sorted
    cout<<"array after sorting is ";
     for(auto &it: arr ){
        cout<< it<<" ";
    }
    int first,second;
    int i =0;
    cout<<"\n";
    for(auto &it : arr){
        first = arr[i];
        second = arr[i+1];
        if(first == second){
            arr[i] = 0;
        }
        i++;

    }
    for(auto &it: arr){
        if(it!=0){
            cout<< it<<" ";
        }
    }
    return 0;
}