#include<iostream>
using namespace std;
void toh(int n, char s,char m,char d){
    if(n==0){
        return;
    }
    toh(n-1,s,m,d);
    cout<<" move disk "<<n<<" from source "<<s<<" to mediator "<<m<<endl;
    toh(n-1,m,d,s);
}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}