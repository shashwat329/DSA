// create a c++ program to check wheather a number is present or not
#include<iostream>
using namespace std;
bool isthere(int arr[],int n,int k){
    if(n==0) return false;
    if(k==arr[0]){

        return true;
    }
    return isthere(arr+1,n-1,k);

}
int main(){
    int arr[]={1,2,5,6,3,8,2};
    cout<<isthere(arr,0,1)<<endl;
    return 0;
}