
#include<iostream>
using namespace std;
int firstoccurance(int arr[],int n,int k){
    int index=0;
    if(n==0) return false;
    if(k==arr[0]){

        return index;
    }
    index= 1+firstoccurance(arr+1,n-1,k);
    return index;

}
int main(){
    int arr[]={1,2,5,6,3,8,2};
    cout<<firstoccurance(arr,7,3)<<endl;
    return 0;
}