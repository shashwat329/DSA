#include<iostream>
using namespace std;
int sumofnaturalno(int n){
    if(n==1){
        return 1;
    }
    else{
        return n+sumofnaturalno(n-1);
    }
   }
int main(){
    int n;
    cin>>n;
    int sum = sumofnaturalno(n);
    cout<<"sum of first nautral number: "<<sum<<endl;
    return 0;
}