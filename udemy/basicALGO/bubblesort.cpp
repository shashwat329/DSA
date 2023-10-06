#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int arr[],int n){
    bool swapped;
    for(int j=0;j<n-1;j++){
        swapped = false;
        for(int i=0;i<n-j-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    display(arr,n);
    return 0;
}