#include<iostream>
using namespace std;
void removeconstructiveduplicate(char arr[]){
    if(arr[0]=='\0'){
        return;
    }
    if(arr[0]!=arr[1]){
        return removeconstructiveduplicate(arr+1);
    }
    else{
        // this for loop is for shifting!1
        for(int i= 0;arr[i]!='\0';i++){
            arr[i]=arr[i+1];  
        }
        return removeconstructiveduplicate(arr);
    }
}
int main(){
    char arr[]="shassshwattiis";
   removeconstructiveduplicate(arr);
   cout<<arr;
    return 0;
}