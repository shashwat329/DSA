#include<iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the target: ";
    cin>>target;
    // transevering in the array
    int i;
    for(i=0;i<n;i++){
        if(target==arr[i]){
            cout<<"found the target: "<<target;
            break;
        }
    }
    if(i==n){
        cout<<"target not found!!"<<endl;
    }
    return 0;
}