// print the number using recursion
#include<iostream>
using namespace std;
void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);

}
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    print(n);
    return 0;
}