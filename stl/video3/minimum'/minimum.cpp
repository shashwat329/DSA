#include<iostream>
using namespace std;
int min(int arr[],int n){
    int mini = arr[0];
    for(int i=1;i<n;i++){
        if(mini>arr[i]){
            mini=arr[i];
        }
    }
    return mini;
}
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int mini = min(arr,n);
    cout<<"the minimum element in the array is : "<<mini<<endl; 
    return 0;
}