#include<iostream>
using namespace std;
int power(int n,int m){
    if(m==0){
        return 1;
    }
    if(m==1){
        return n;
    }
 
    return n*power(n,m-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    int pwr=power(n,m);
    cout<<n<<" ka power "<<m<<" is "<<pwr<<endl;
}