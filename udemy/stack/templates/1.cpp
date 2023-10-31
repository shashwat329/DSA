#include<iostream>
using namespace std;
template <typename t>
class Pair{
    t x;
    t y; 
    public:
    void setx(t x){
        this->x= x;
    }
    t getx(){
        return x;
    }
    void sety(t y){
        this->y= y;
    }
    t gety(){ 
        return y;
    }

};
int main(){
    Pair <int> p1;
    Pair<double> p2;
    p1.setx(1);
    p1.sety(2);
    cout<<p1.getx()<<endl;
    p2.setx(1.222);
    p2.sety(2.222);
    cout<<p2.getx()<<endl;
    cout<<p2.gety()<<endl;
    return 0;
}