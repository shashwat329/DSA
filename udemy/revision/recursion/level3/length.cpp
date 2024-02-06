#include<iostream>
using namespace std;
int length(int arr[],int n){
    if(n==0)return 0;
    int smallcase = length(arr+1,n-1);
    return 1+smallcase;
}
int main(){
    int arr[]={1,2,3,4,5};
    cout<<"length of the array is "<<length(arr,5)<<endl;
    return 0;
}