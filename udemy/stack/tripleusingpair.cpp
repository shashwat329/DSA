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
    Pair <Pair<int,int>,char> p1;
    Pair<int,int> p2;
    p2.setx(1);
    p2.sety(2);
    cout<<p2.getx()<<endl;
    cout<<p2.gety()<<endl;
    p1.setx(p2);
    p1.sety('a');
    cout<<p1.getx().getx()<<" "<<p1.getx().gety()<<" "<<p1.gety()<<endl;
    return 0;
}