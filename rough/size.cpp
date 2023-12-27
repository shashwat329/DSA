#include<iostream>
using namespace std;
// conclusion
// if we modify the size of a dynamic array then value of all element is zero
int main(){
    int *arr;
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    arr = new int [n];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    n=n*2;
    arr = new int [n];
    // for(int i=0;i<n+1;i++){
    //     cout<<arr[i]<<" ";
    // }
    
    cout<<endl;
    return 0;
}