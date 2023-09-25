#include<bits/stdc++.h>
using namespace std;
class node{
    string str;
    double doub;
    int num;
    char c;
    public:
    node(string str,double doub, int num,char c){
        this->str = str;
        this->doub= doub;
        this->num=num;
        this->c =c;
    }
    void display(){
        cout<<str<<endl;
        cout<<doub<<endl;
        cout<<num<<endl;
        cout<<c<<endl;
    }
};
int main(){
    node *n1 = new node("shashwat",2.22,23,'e');
    n1->display();
    return 0;
}