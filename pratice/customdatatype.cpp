// create a custom datatype which takes string,int,float and char as input
#include<bits/stdc++.h>
using namespace std;
class node{
    string str;
    int num;
    float flow;
    char c;
    public:
    // node(){};
    node(string s,int n, float f,char cha){
        str=s;
        num = n;
        flow = f;
        c= cha;
    }
    void display(){
        cout<<str<<endl;
        cout<<num<<endl;
        cout<<flow<<endl;
        cout<<c<<endl;

    }
};
int main(){
    node *n1 = new node("shashwat",27,2.33,'c');
    n1->display();
    return 0;
}