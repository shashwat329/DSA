#include<iostream>
using namespace std;
int gp(int s,int r,int n){
    int nextterm =s;
    if(n==1){
        return nextterm;
    }   
    return  gp(nextterm *r,r,n-1); 
}
int main(){
    int s,n,m;
    cin>>s>>m>>n;
    int ans = gp(s,m,n);
    cout<<"mulipcaation of two number: "<<ans;
    return 0;
}