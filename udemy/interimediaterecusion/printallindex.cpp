#include<iostream>
using namespace std;
void Aindex(int arr[],int n,int key,int i){
    if(n==0||i==n){
        return;
    }
    if(arr[i]==key){
        cout<<i<<" ";
    }
    return Aindex(arr, n,key,i+1);

}
int main(){
    int arr[10]={1,2,1,2,4,5,7,5,3,1};
  Aindex(arr,10,1,0);
    return 0;
}