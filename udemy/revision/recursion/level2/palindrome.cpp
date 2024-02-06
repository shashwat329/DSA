#include<iostream>
using namespace std;
bool palindrome(int arr[],int s,int e){
    if(s>e) return true;
    if(arr[s]!=arr[e] ){
        return false;
    }
    return palindrome(arr,s+1,s-1);
}
int main(){
   int arr[]={1,2,4,2,1};
   cout<<palindrome(arr,0,4)<<endl;
    
    return 0;
}