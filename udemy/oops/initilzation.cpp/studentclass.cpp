#include<iostream>
using namespace std;
class student{
    public:
    int age;
    int  const rollnumber;
    student(int a,int r):age(a),rollnumber(r){
        cout<<age<<" and "<<rollnumber<<"\n";
    }
};