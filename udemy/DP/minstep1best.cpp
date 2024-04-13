#include<iostream>
using namespace std;
int minstep_best(int n){
    int *dp = new int[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i =1;i<=n;i++){
        int x = dp[i-1];
        int y,z;
        y,z = INT_MAX;
        if(i%2==0){
            y = dp[i/2];
        }
        if(n%3==0){
            z= dp[i/3];
        }
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<minstep_best(10)<<endl;
    return 0;
}