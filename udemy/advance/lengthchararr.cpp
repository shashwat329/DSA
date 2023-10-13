#include<iostream>
using namespace std;
int lengthstring(char arr[]){
    int count =0;
    if(arr[0]=='\0'){
        return count;
    }
    return 1+ lengthstring(arr+1);
}
int main(){
    char arr[]="shashwat";
    cout<<lengthstring(arr);
    return 0;
}