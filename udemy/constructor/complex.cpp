#include<bits/stdc++.h>
using namespace std;
class cmplex{
    private:
    int real;
    int img;
    public:
    cmplex(int a,int b){
        real=a;
        img =b; 
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    void add(cmplex c){
        int n1=this->real+c.real;
        int n2=this->img+c.img;
        cout<<n1<<"+"<<n2<<"i"<<endl;
    }
};
int main(){
    cmplex c1(1,2),c2(2,3),c3(3,4);
    c1.display();
    c2.display();
    c1.add(c2);
    return 0;
}