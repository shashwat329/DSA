#include<iostream>
#include<vector>
using namespace std;
int knapsack(int n,int W,vector<int> price,vector<int> wts){
    if(n==0||W==0){
        return 0;
    }
    if(wts[n-1]>W){
        return knapsack(n-1,W,price,wts);
    }
    else{
        int include=price[n-1]+knapsack(n-1,W-wts[n-1],price,wts);
        int exclude=0+knapsack(n-1,W,price,wts);
        return max(include,exclude);
    }
}
int main(){
    return 0;
}