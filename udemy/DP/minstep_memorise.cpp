#include<iostream>
using namespace std;
int minstep1(int n,int *arr){
    int x= INT_MAX;
    int y= INT_MAX;
    
    if(n==1){
        return 0;//base case;
    }
    if(arr[n]!=0){
        return arr[n]; //using the stored value
    }
    int z= minstep1(n-1,arr);
    if(n%3==0){
        x = minstep1(n/3,arr);
    }
    if(n%2==0){
        y= minstep1(n/2,arr);
    }
     arr[n]=min(x,min(y,z))+1;
     return arr[n];
}
int main(){
    int n;
    cin>>n;
     int *arr= new int[n+1];
     for(int i=0;i<=n;i++){
        arr[i]=0; 
    } 
    cout<<minstep1(n,arr)<<endl;
    return 0;
}