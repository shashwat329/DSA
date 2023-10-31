#include<iostream>
using namespace std;
template <typename t, typename v>
class Pair{
    t x;
    v y; 
    public:
    void setx(t x){
        this->x= x;
    }
    t getx(){
        return x;
    }
    void sety(v y){
        this->y= y;
    }
    v gety(){ 
        return y;
    }

};
int main(){
    Pair <int,char> p1;
    Pair<double,char> p2;
    p1.setx(1);
    p1.sety('a');
    cout<<p1.getx()<<endl;
    p2.setx(1.222);
    p2.sety('b');
    cout<<p2.getx()<<endl;
    cout<<p2.gety()<<endl;
    return 0;
}