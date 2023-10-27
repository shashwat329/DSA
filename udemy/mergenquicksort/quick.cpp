#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int i=s;
    for(int j=s;j<e;j++){
        if(arr[j]<arr[e]){
            swap(arr[i],arr[j]);
            i++; 
        }
    }
    swap(arr[i],arr[e]);
    return i;
}
void quicksort(int a[],int s,int e){
    if(s>=e){
        return;
    }
    int p= partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}
int main(){
    int arr[8]={1,4,2,-4,5,10,23,12};
    quicksort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
 
    return 0;
}