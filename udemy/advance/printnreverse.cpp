#include<iostream>
using namespace std;
void print(char arr[]){
    if(arr[0] =='\0'){
        return;
    }
    cout<<arr[0];
    return print(arr+1);
}
int main(){
    char arr[]="abes";
    print(arr);
    return 0;
}