#include<iostream>
using namespace std;
void removechar(char arr[],char key){
    if(arr[0]=='\0'){
        return;
    }
    if(arr[0]!=key){
        removechar(arr+1,key);
    }
    else{
        for(int i=0;arr[i]!='\0';i++){
            arr[i]=arr[i+1];
        }
        removechar(arr,key);
    }
}
int main(){
    char arr[]="shashwat";
    removechar(arr,'a');
    cout<<arr;
    return 0;
}