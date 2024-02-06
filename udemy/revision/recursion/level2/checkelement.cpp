#include<iostream>
using namespace  std;
bool ischeck(int arr[],int n){
    if(n==0)return 0;
    bool ans = ischeck(arr+1,n-1);
    return arr[0]+ans;

}
int main(){
    int arr[]={5,5,10,40,40,20};
    cout<<ischeck(arr,6)<<endl;
    return 0;
}