#include<iostream>
using namespace std;
int sumofarray(int arr[],int n){
    int sum =0;
    if(n==0){
        return 0;
    }
    sum = sum + arr[0];
    return sum + sumofarray(arr+1,n-1);
}
int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int ans = sumofarray(arr,10);
    cout<<"the sum of all elements of array is: "<<ans<<endl;
    return 0;
}