#include<iostream>
using namespace std;
int multiplication(int n,int m){
    if(m==0){
        return 0;
    }
    int smallercase = multiplication(n,m-1);
    return n+smallercase;
}
int main(){
    int n,m;
    cout<<"enter two number: ";
    cin>>n;
    cin>>m;
    cout<<"mutipication of digit of "<<n<<" and "<<m<<" is "<<multiplication(n,m)<<endl;
    return 0;
}