#include<iostream>
#include<stack>
using namespace std;
bool vaild(string str){
    stack<char> s;
    for(int i = 0;i<=str.length();i++){
        if(str[i]=='['||str[i]=='{'||str[i]=='('){
            s.push(str[i]);
        }
        else if((str[i]==']'&&s.top()=='[')||(str[i]=='}'&&s.top()=='{')||(str[i]==')'&&s.top()=='(')){
            s.pop();
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s1;
    s1 ="({}[]())";
    cout<<vaild(s1)<<endl;
    return 0;
}