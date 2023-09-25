#include<iostream>
#define num 100;
using namespace std;
int main(){
    int n,k;
    int arr[100];
    int count =0;
    cout<<"enter the size of the array: ";
    cin>>n;
    cout<<"enter the elements of the array: ";
    for(int i =0;i<n;i++){
     cin>>arr[i]; 
    }
    cout<<"enter the elememt : ";
    cin>>k;
    for (int i = 0; i < n; i++)
    {
       if(k==arr[i]){
        count++;
       }
    }
    cout<<"no of times "<< k<<" appears is "<<count<<endl;
    return 0;
}