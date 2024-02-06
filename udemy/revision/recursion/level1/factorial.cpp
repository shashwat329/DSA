#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    int smaller = factorial(n-1);
    return n*smaller;
}
int main(){
    int n;
    cout<<"enter the any number: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}