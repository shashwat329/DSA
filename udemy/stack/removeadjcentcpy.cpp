#include<iostream>
using namespace std;
string solution(string s){
    int strptr =-1;
    for(int i =0;i<s.size();i++){
        if(strptr==-1||s[strptr]!=s[i]){
            strptr++;
            s[strptr]=s[i];
        }
        else{
            strptr--;
        }
    }
    // string ans ="";
    // for(int i =0;i<=strptr;i++){
    //     ans.push_back(s[i]);
    // }
    // return ans;
     return s.substr(0, strptr + 1);
    }
int main(){
    string s = "aaaaaaaa";
    // string s = "abbaccd";
    // string s = "abbaaccd";
    cout<<solution(s)<<endl;

    return  0;
}