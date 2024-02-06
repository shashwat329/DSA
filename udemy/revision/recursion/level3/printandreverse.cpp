#include<iostream>
using namespace std;
void print(int arr[],int size){
    if(size==0) return ;
    cout<<arr[0]<<" ";
    print(arr+1,size-1);

}
void printreverse(int arr[],int size){
    if(size==0) return;
    cout<<arr[size-1]<<" ";
    printreverse(arr,size-1);
}
int main(){
    int arr[]={1,3,12,16,31,32};
    print(arr,6);
    cout<<endl;
    printreverse(arr,6);
    return 0;
}