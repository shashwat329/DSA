#include<iostream>
#include<string>
using namespace std;
void replacechar(string &s,char c,char a,int index=0){
    if(index>=s.length()) return;
    if(s[index]==c){
        s[index]=a;
    }
    replacechar(s,c,a,index+1);
}
int main(){
    string s = "shashwat";
    cout<<s<<endl;
    replacechar(s,'a','x');
    cout<<s<<endl;


    return 0;
}