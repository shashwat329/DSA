#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter any number: ";
    cin>>x>>y;
    cout<<"two numbers are: "<<x<<" and "<<y<<endl;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int hcf = x;
    cout<<"hcf of any two numbers are : "<<hcf<<endl;
    return 0;
}