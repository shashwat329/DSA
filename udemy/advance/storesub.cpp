#include<iostream>
#include<vector>
using namespace std;
void storesub(string input, string output, vector <string> &v){
    if(input.length()==0){
        v.push_back(output);
        return;
    }
    // include
    storesub(input.substr(1),output+input[0],v); 
    // exclude
    storesub(input.substr(1),output,v); 

}

int main(){
    string str;
    cin>>str;
    string out ="";
    vector <string> v;
    storesub(str,out,v);
    for(int i =0;i<v.size();i++ ){
        cout<<v[i]<<endl;
    }
    return 0;
}