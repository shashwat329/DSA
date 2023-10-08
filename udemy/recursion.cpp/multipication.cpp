#include<iostream>
using namespace std;
int multiplication(int x,int  y){
    if(x==0||y==0){
        return 0;
    }
    if(y==1){
        return x;
    }
    int multi = x + multiplication(x,y-1);
    return multi;
}
int main(){
    int n,m;
    cin>>m>>n;
    int ans = multiplication(m,n);
    cout<<"mulipcaation of two number: "<<ans<<endl;
    return 0;
}