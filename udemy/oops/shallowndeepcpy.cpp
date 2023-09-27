#include<iostream>
using namespace std;
class student{
    int age;
    char *name;
    public:
    student(char *name,int age){
        // this->name = name; this is what shallow copy is 
        // now using deep copy when complete array is copied
        this->name =new char[strlen(name)+1]; 
        strcpy(this->name,name);
        this->age = age;
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};
int main(){
    char name[] ="shashwat";
    student s1(name,10);
    s1.display();
    name[4]='s';
    student s2(name,20);
    s2.display();
    s1.display();

    return 0;
}