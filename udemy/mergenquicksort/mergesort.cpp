#include<iostream>
using namespace std;
void mergeArrays(int x[],int y[],int a[],int s,int e){
       int mid = (s+e)/2;
       int i=s;
       int j = mid+1;
       int k = s;
       while(i<=mid && j<=e){
           if(x[i] < y[j]){
            a[k] = x[i];
            i++;
            k++;
           }else{
             a[k] = y[j];
             j++;
             k++;
           }
       }
       while(i<=mid){
        a[k] = x[i];
        k++;
        i++;
       }
       while(j<=e){
        a[k] = y[j];
        k++;
        j++;
       }
}

void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = (s+e+1)/2;
    int x[100], y[100];
    for(int i =s;i<=e;i++){
        if(i<mid){
            x[i]=arr[i];
        }
        else{
            y[i-mid]=arr[i];
        }
    }
    mergesort(x,s,mid);
    mergesort(y,s,e-mid+1);
    mergeArrays(x,y,arr,s,e);

}
int main(){
    int arr[]={1,4,2,-4,5,10,23,12};
    int n = 8;
    cout<<"array before mergesort: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}