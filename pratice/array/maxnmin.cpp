#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,5> num;
    for(auto &it: num){
        cin>>it;
    }
    // the entered array is this
    for(auto &it:num){
        cout<< it<<" ";
    }
    int largest,smallest;
    largest = num[0];
    smallest = num[0];
    for(auto &it1:num){
        if(largest<it1){
            largest=it1;
        }
        else if (smallest>it1 ){
            smallest = it1;
        }
    }
    cout<<"the largest number in the array is "<<largest<<endl;
    cout<<"the smallest number in the array is "<<smallest<<endl;
    return 0;
}