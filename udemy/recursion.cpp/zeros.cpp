#include<iostream>
using namespace std;
int zeros(int n){
    int no =0;
    if(n==0){
        return no;
    }
    int remain = n%10;
    if(remain==0){
        no++;
        return no+zeros(n/10);
    }
    return no;
}
int main(){
    int n;
    cin>>n;
    int ans =zeros(n);
    cout<<"number of zeros are : "<<ans<<endl;
    return 0;
}