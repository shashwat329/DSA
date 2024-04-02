#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;
int main(){
    unordered_map<string,int> mp;
    mp["abc"]=1;
    mp["abc2"]=2;
    mp["abc3"]=3;
    mp["abc3"]=3;
    mp["abc4"]=4;
    mp["abc5"]=5;
    for(unordered_map<string ,int> ::iterator it =mp.begin();it!=mp.end();it++){
        cout<<"key is "<<it->first<<" and value is "<<it->second<<endl;
    }
    // using auto instead of typecasting.....
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<"key is "<<it->first<<" and value is "<<it->second<<endl;
    }
    return 0;
}