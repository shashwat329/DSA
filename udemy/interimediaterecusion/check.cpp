#include<iostream>
using namespace std;
bool checkkar(int arr[],int n,int key){
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    bool check = checkkar(arr+1,n-1,key);
    return check;

}
int main(){
    int arr[]={1,2,4,5,3,9,10};
    int key;
    cin>>key;
    int ans  = checkkar(arr,7,key);
    if(ans ==0){
        cout<<"key not found!!";
    }
    else{
        cout<<"key found!! ";
    }
    return 0;
}