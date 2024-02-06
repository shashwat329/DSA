#include<iostream>
#include<string>
using namespace std;
void removechar(string &s,char c,int index=0){
    if(index>=s.length()) return;
    if(s[index]==c){
        for(int i=index;i<s.length();i++){
            s[i]=s[i+1];
        }
    }
    removechar(s,c,index+1);
}
void removeconsecutiveduplicate(string &s,int index =0){
    if(index>=s.length()-1){
        return;
    }
    if(s[index]==s[index+1]){
        for(int i=index;i<s.length()-1;i++){
            s[i]=s[i+1];
        }  
        s.resize(s.length()-1);
        // above for loop is for find consectutive duplicate chars
        removeconsecutiveduplicate(s,index);
    }
    else{

      removeconsecutiveduplicate(s,index+1);
      }

}
// void removeconsecutiveduplicate2(string &s,int index =0){
//     if(index>=s.length()) return;

// }
int main(){
    string s = "shashwat";
    cout<<s<<endl;
    removechar(s,'a');
    cout<<s<<endl;
    string s1="aaaaabbbccdef";
    removeconsecutiveduplicate(s1);
    cout<<s1<<endl;


    return 0;
}