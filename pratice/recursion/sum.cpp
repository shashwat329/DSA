#include<iostream>
using namespace std;
int sumofarray(int *arr,int k){
    if(k==-1){
        return 0;
    }
    int sum =0;
    sum=sum+arr[k-1];
    cout<<sum<<endl;
    return sum+sumofarray(arr,k-1);
}
int main(){
    int sum =0;
    int arr[10]={1,2,4,5,7,0,10,10,13,34};
    for(int i=0;i<10;i++){
        sum = sum+arr[i];
    }
    cout<<"sum of all element of array using iterative apporach is : "<<sum<<endl;
    int ans = sumofarray(arr,10);
    cout<<"sum of all element of array using recusive apporach is : "<<ans<<endl;

    return 0;
}