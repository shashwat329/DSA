#include<iostream>
using namespace std;
int sumArray(int arr[],int n){
    int sum =0;
    if(n==0)return 0;
    if(n==1) return arr[0];
    int ans = sumArray(arr+1,n-1);
    return arr[0]+ans;

}
int main(){
    int arr[]={5,5,10,40,40,20};
    cout<<sumArray(arr,6)<<endl;
    return 0;
}