#include<iostream>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
    }
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<"factorial of "<<n<<" is "<<ans<<endl;
    return 0;
}