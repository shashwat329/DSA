#include<iostream>
using namespace std;
int sumdigits(int n){
    int sum =0;
    if(n==0){
        return sum;
    }
    int remainder = n%10;
    sum = sum*10 + remainder;
    return sum+ sumdigits(n/10); 
}
int main(){
    int n;
    cin>>n;
    int ans=sumdigits(n);
    cout<<"sum of digits are : "<<ans<<endl;
    return 0;
}