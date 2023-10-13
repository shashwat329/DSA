#include<iostream>
using namespace std;
bool checkpalindrome(int arr[],int n,int s,int e){
    if(s>e){
        return true;
    }
    if(arr[s]==arr[e]){
        return checkpalindrome(arr,n,s+1,e-1);
    }
    return false;
}
int main(){
    int arr[]={1,2,7,2,1};
    bool check = checkpalindrome(arr,5,0,4);
    if( check==false){
        cout<<"not a palindrome number!!"<<endl;
    }
    else{
        cout<<"its a palindrome number!!"<<endl;
    }
    return 0;
}