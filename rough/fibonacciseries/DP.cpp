#include<iostream>
using namespace std;
// method 1:
int fib(int n ,int *arr){
    if(n==0||n==1){
        return n;
    }
    if(arr[n]!=0){
        return arr[n];
    }
    int output = fib(n-1,arr)+fib(n-2,arr);
    arr[n]= output;
    return output;
}
// method 2:
int fib2(int n){
    if(n==0||n==1){
        return n;
    }
    int * arr = new int(n+1);
    arr[0]=0;
    arr[1]=1;
    for(int i =2;i<n+1;i++){
        arr[i]=arr[i-2]+arr[i-1];
    }
    int output =arr[n];
    delete []arr;
    return output;
}
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i =0;i<n+1;i++){
        arr[i]=0;
    }
    cout<<fib(n,arr)<<endl;
    cout<<fib2(n)<<endl;

    return 0;
}