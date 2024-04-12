#include<iostream>
using namespace std;
int minstep(int n){
    if(n==1){
        return 0;
    }
    int y=INT_MAX;
    int z=INT_MAX;//as we are using a min function so intalising with zero cant be done.
    
    int x=minstep(n-1);
    if(n%2==0){
        y = minstep(n/2);
    }
    if(n%3==0){
        z= minstep(n/3);
    }
    int ans  = min(x,min(y,z))+1;
    return ans;
}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    cout<<minstep(n)<<endl;
    return 0;
}