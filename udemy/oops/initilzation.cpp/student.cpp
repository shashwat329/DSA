#include<iostream>
#include "studentclass.cpp"
using namespace std;
int main(){
    student s1(20,100);
    s1.age =100;
    cout<<s1.age<<endl;
    cout<<s1.rollnumber<<endl;
    return 0;
}