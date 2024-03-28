// implementation of unordered map
#include<iostream>
// #include<pair>
#include<string>
#include<unordered_map>
#include<utility>


using namespace std;
int main(){
    unordered_map<string,int> mymap;
    // method 1 to insert
    pair<string,int> p("shashwat",1);
    mymap.insert(p);
    // method 2 to insert
    mymap["piyush"]=2;
    cout<<mymap["piyush"]<<endl;
    cout<<mymap.at("shashwat")<<endl;
    cout<<mymap["shd"]<<endl;
    cout<<mymap.at("shd")<<endl;
// count function in unordered map
cout<<mymap.count("shashwat")<<endl;
cout<<mymap.count("shd")<<endl;
// check wheather a key is present or not...
string s ="shasht";
if(mymap.count(s)>0){
    cout<<"yes it is present in the unordered map"<<endl;
}
else{
    cout<<"it is not present in the unordered map"<<endl;
}


    //  functions in unordered map
    // 1)insert -- one of the method to insert element in the unorderedmap
    // 2)at-- one of the method to output the particular element
    // 3)delete-- one of the elememt to delete
    // 4)count-- 0 if not present else 1
    // 5)size --count number of element in the map

        
    return 0;
}