#include<iostream>
using namespace std;
int toh(int n){
    if(n==0)return 0;
    return toh(n-1)+1+toh(n-1);
}
void printstep(int n,char s,char d,char h){
    if(n==0)return;
    printstep(n-1,s,h,d);
    cout<<"moving disk "<<n<<" from "<<s<<" to "<<d<<endl;
    printstep(n-1,h,d,s);
}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    cout<<"total number of step taken "<<toh(n)<<endl;
    char source,destniation,helper;
    source='s';destniation='d';helper='h';
    printstep(n,source,destniation,helper);
    return 0;
}