#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={12,15,7 ,4,9};
    int  k =3;
    priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // arr
    int s =0;
    int j=k;
    int b[5]={-1};
    // iterating the rest of the array
    for(int i = k;i<5;i++){
        arr[s]=pq.top();
        pq.pop();
         s++;
        pq.push(arr[i]);
       
    }
    while(!pq.empty()){
        arr[s]=pq.top();
        pq.pop();
        s++;
    }
    // this is for printing the array b
    for(int i=0;i<5;i++){
        // arr[i]=b[i];
        cout<<arr[i]<<" ";
    }
    return 0;
}