#include<iostream>
int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    int small1= fib(n-1);
    int small2 = fib(n-2);
    return small1+small2;
}
using namespace std;
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    cout<<"fib number at "<<n<<"th position is "<<fib(n)<<endl;
    return 0;
}