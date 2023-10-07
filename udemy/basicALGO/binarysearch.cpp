#include<iostream>
using namespace std;
int main(){
    int n,mid;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key value: ";
    cin>>key;
    int s=0;
    int e =n-1;
   while(s<=e){
     mid =(s+e)/2;
    if(arr[mid] ==key){
        cout<<"found the key!"<<endl;
        break;
    }
    else if(arr[mid]>key){
        e = mid-1;
    }
    else if(arr[mid]<key){
        s = mid+1;
    }
   }
   if(s>e){
cout<<"key not found!"<<endl;
   }
    return 0;
}