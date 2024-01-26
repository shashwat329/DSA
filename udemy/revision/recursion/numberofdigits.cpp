#include<iostream>
using namespace std;
int numberofdigit(int n){
    int count =1;
    if(n==0){
        return 0;
    }
    int small = numberofdigit(n/10);
    return count+ small;
}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    cout<<"number of digit in "<<n<<" is "<<numberofdigit(n)<<endl;
    return 0;
}