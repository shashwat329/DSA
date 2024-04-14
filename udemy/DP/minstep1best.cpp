#include<iostream>
using namespace std;
int minstep_best(int n){
    int *dp = new int[n+1];
    dp[0]=0;
    dp[1]=0;
    for(int i =2;i<=n;i++){
        int x = dp[i-1];
        int y,z;
        y=z = INT_MAX;
        if(i%2==0){
            y = dp[i/2];
        }
        if(i%3==0){
            z= dp[i/3];
        }
        dp[i]=min(x,min(y,z))+1;
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<minstep_best(n)<<endl;
    return 0;
}