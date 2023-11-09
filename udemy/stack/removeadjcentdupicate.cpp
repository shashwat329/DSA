#include<iostream>
#include<stack>
using namespace std;
int main(){
    // string s = "mississippi";
    // string s = "aaabccddd";
    string s ="aaaaaa";

    stack <char> s1;
    for(int i =0;i<=s.size();i++){
        if(s1.empty()){
            s1.push(s[i]);

        }
        else if(s1.top()!=s[i]){
            s1.push(s[i]);
        }
        else{
            s1.pop();
        }
    }
    cout<<s<<endl;

    if(s1.size()==0){
        return -1;
    }
    for(int i=0;i<s1.size();i++){
    s1.pop();
    cout<<s1.top()<<endl;
    }
    return 0;
}