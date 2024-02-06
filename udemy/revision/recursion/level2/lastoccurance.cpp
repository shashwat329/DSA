#include<iostream>
using namespace std;
int lastoccurance(int arr[],int n,int k){
    int index=n-1;
    if(n==0) return -1;
    if(k==arr[n-1]){
        // cout<<"inside the main condition"<<index<<endl;
        return index;
    }
    // cout<<index<<endl;
    int ans = lastoccurance(arr,n-1,k);
    // index= 1-lastoccurance((arr+n-1)-1,n-1,k);
    return ans;

}
int main(){
    int arr[]={1,2,5,6,3,8,2};
    cout<<lastoccurance(arr,7,1)<<endl;
    return 0;
}