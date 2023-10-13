#include<iostream>
using namespace std;
void display(char arr[],char key,char keytarget){
    if(arr[0]=='\0'){
        return;
    }
    if(arr[0]==keytarget){
        arr[0]=key;
    }
    return display(arr+1,key,keytarget);
}
int main(){
    char arr[]="shashwat";
    display(arr,'x','a');
    for(int i =0;i<8;i++){
        cout<<arr[i];
    }
    return 0;
}