#include<iostream>
#define size 10
using namespace std;
int smallest(int* arr,int s){
        int min = arr[0];
    for(int i =0;i<s;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int n;
    cin>>n;
    int arr[size];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array before sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    // writing algo for selection sort
for(int i = 0;i<n;i++){
    int min =smallest(arr+1,n);
    cout<< "min element is: "<<min<<endl;
    if(min>arr[i]){
        swap(arr[i],min);
    }
}
    cout<<"\narray after sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    } 
    return 0;
}