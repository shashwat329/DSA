#include<iostream>
#include<string>
using namespace std;
void display(string input,string output){
    if(input.length() == 0){
        cout<<output<<endl;
        return;
    }
    display(input.substr(1),output);
    display(input.substr(1),output+input[0]);

}
int main(){
    char arr[]="abc";
    char output[] ="";
    display(arr,output);
    return 0;
}