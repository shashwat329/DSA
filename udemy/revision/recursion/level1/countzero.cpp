#include<iostream>
using namespace std;
int countzero(int n){
    int count=0;
    if(n==0) return 1;
    if(n>0&&n<10){
        return 0;
    }
    if(n%10==0) count++;
    int smallcase = countzero(n/10);
    return count+smallcase;
}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    cout<<"total number of zero in "<<n<<" is "<<countzero(n)<<endl;
    return 0;
}