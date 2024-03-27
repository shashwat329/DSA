// count the heightest char in a string
#include<iostream>
#include<string>
using namespace std;
int heightestoccurance(string s){
    int arr[256]={0};
    for(int i =0;i<s.length();i++){
        char c = s[i];
        int loc = int(c);
        arr[loc]=arr[loc]+1;
    }
    int max=0;
    for(int i =0;i<256;i++){
        if(max<arr[i]){
            max= arr[i];
        }
    }
    return max;
}
int main(){
    string s = "abeeebabeedde";
    int ans = heightestoccurance(s);
    cout<<"heightest occurance in the string is : "<<ans<<endl;
    
    return 0;
} 