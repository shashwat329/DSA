#include<iostream>
using namespace std;
int gcd(int a,int b){
     while(b!=0){
        int temp = b;
        b =a% b;
        a = temp;
    }
    return a;
}
int main(){
    int x,y;
    cin>>x>>y;
    int gcd_no =gcd(x,y);
    cout<<"gcd of two numbers are: "<<gcd_no<<endl;
    int lcm =(x*y)/gcd_no;
    cout<<"lcm of lcm is: "<<lcm<<endl;
    return 0;
}