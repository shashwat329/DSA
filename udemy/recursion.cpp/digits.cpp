#include<iostream>
using namespace std;
int digit(int n){
    int count =0;
    if(n==0){
        return count;
    }
    count++;
    return count+digit(n/10);
}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    int digitcount =digit(n);
    cout<<"digitcount is : "<<digitcount<<endl;
    return 0;
}