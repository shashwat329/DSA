#include<iostream>
using namespace std;
int power(int num,int pow){
    if(pow==0) return num;
    if(pow==1) return num;
    int small = power(num,pow-1);
    return num*small;
}
int main(){
    cout<<"enter the any number : ";
    int n;
    cin>>n;
    cout<<"enter the power number : ";
    int p;
    cin>>p;
    cout<<n<<" ka power"<<p<<" is "<<power(n,p)<<endl;
    return 0;
}