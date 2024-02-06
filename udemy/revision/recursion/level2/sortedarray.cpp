#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    if (n==0||n==1) return true;
    if(arr[0]>arr[1]) return false;
    bool smallcase = issorted(arr+1,n-1);
    return smallcase;
        
}
int main(){
    int arr[10]= {1,2,3,1,5,6,7,8,9,10};

    cout<<issorted(arr,10)<<endl;

    return 0;
}