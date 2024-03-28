#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string,int> mp;
    mp["abc"]=1;
    mp["abc1"]=2;
    mp["abc2"]=3;
    mp["abc3"]=4;
    mp["abc4"]=5;

for(unordered_map<string,int> ::iterator it = mp.begin();it!=mp.end();it++){
    cout<<"key: "<<it->first<<" value: "<<it->second<<endl;
}
    return 0;
} 