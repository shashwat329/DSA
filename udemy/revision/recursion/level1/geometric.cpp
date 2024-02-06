#include<iostream>
using namespace std;
int geometric(int a,int r,int n){
    if(n==0) return -1;
    if(n==1) return a;
    int smallcase = geometric(a,r,n-1);
    return r*smallcase;
}
int main(){
    int a,r,n;
    cout<<"enter first number of gp : ";
    cin>>a;
    cout<<"enter the common ratio of gp: ";
    cin>>r;
    cout<<"enter the position of element to be found: ";
    cin>>n;

    cout<<n<<"th element of the gp is: "<<geometric(a,r,n)<<endl;
    return 0;
}
