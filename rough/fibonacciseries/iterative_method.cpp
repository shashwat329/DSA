#include<iostream>
using namespace std;
int fib(int n){
   int first = 0;
   int second =1;
   int next;
    for(int i =2;i<n;i++){
        next = first+second;
        first = second;
        second = next;
    }
    return next;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}