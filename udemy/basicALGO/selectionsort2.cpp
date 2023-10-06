#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,index;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    // array before sorting is 
    cout<<"array before sorting is: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i =0;i<n-1;i++){
        int min=arr[i+1];
        for(int j =i+1;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                index  = j;
            }
        }
        if(arr[i]>min){
        int temp = arr[index];
        arr[index] = arr[i];
        arr[i]=temp;
        }
    }
     cout<<"\narray AFTER sorting is: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}