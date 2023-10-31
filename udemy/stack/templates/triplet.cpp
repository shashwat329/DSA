#include<iostream>
using namespace std;
template <typename t,typename v ,typename w>
class Pair{
    t x;
    v y; 
    w z;
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
    void setz( w z ){
        this->z =z;
    }
    w getz(){
        return z;
    }

};
int main(){
    Pair <int,int,int> p1;
    Pair<double,int ,int> p2;
    Pair<double,char ,int> p3;
    p1.setx(1);
    p1.sety(2);
    p1.setz(3);
    cout<<p1.getx()<<" "<<p1.gety()<<" "<<p1.getz()<<endl;
    p2.setx(1.222);
    p2.sety(2);
    p2.setz(3);
    cout<<p2.getx()<<" "<<p2.gety()<<" "<<p2.getz()<<endl;
   p3.setx(2.222);
    p3.sety('a');
    p3.setz(3);
    cout<<p3.getx()<<" "<<p3.gety()<<" "<<p3.getz()<<endl;

    return 0;
}