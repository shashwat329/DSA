#include<bits/stdc++.h>
using namespace std;
class fraction{
    int numerator;
    int denominator;
    public:
    fraction(int x,int y){
        numerator =x;
        denominator =y;
    }
    void display(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void add(fraction x){
        int lcm =this->denominator*x.denominator;
        numerator = numerator*(lcm/this->denominator)+x.numerator*(lcm/x.denominator);
        denominator =lcm;
        simplify();
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void simplify(){
        int gcd =1;
        int j=min(this->numerator,this->denominator);
        for(int i =1;i<=j;i++){
            if(numerator%i==0&&denominator%i==0){
                gcd = i;
            }
        }
        numerator=numerator/gcd;
        denominator=denominator/gcd;

    }
};
int main(){
    fraction n1(2,3),n2(3,4),n3(10,2),n4(15,4),n5(1,2),n6(1,2);
    n1.display();
    n2.display();
    n1.add(n2);
    n3.add(n4); 
    n5.add(n6);
    return 0;
}