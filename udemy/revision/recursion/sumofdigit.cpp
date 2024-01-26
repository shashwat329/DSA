#include<iostream>
using namespace std;
int sumofdigit(int n){
    int sum =0;
    if(n==0){
        return 0;
    }
    int smallercase = sumofdigit(n/10);
    return n%10 +smallercase;
}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    cout<<"sum of digit of "<<n<<" is "<<sumofdigit(n)<<endl;
    return 0;
}