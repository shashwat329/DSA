#include<bits/stdc++.h>
using namespace std;
class fraction{
    public:
    int num;
    int denom;  
    fraction(){};
    fraction(int n,int m){
        num = n;
        denom = m;
    }
    void display(void){
        cout<<num<<"/"<<denom<<endl;
    }
    int gcd(int ,int);
    int lcm(int ,int );
    

};
int gcd(int a,int b){
        while(b!=0){
            int temp =b;
            b=a%b;
            a =temp;
        }
        return a;
    }
int lcm(int x,int y){
    int gcd_no =gcd(x,y);
        return (x*y)/gcd_no;
};
    void addednum(fraction x,fraction y){
        int lcm_no = lcm(x.denom,y.denom);
        int num_res=(lcm_no/x.denom)*(x.num)+(lcm_no/y.denom)*(y.num);
        cout<<num_res<<"/"<<lcm_no<<endl;
    }
int main(){
    fraction n1(1,2),n2(2,3),n3(3,4),n4(1,8);
    n1.display();
    n2.display();
    n3.display();
    addednum(n1,n2);
    addednum(n1,n4);
    addednum(n2,n3);
    n1.display();



    return 0;
}