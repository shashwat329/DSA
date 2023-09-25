#include<bits/stdc++.h>
using namespace std;
int main(){
 map<string, int> mpp;
mpp ["raj"] = 27;
mpp ["'hima"] = 31;
mpp ["praveer"] = 31;
mpp ["sandeep" ] = 67 ;
mpp ["tank" ] = 89;
mpp ["raj"] = 29; 
mpp.emplace("raj", 45); 
mpp.erase ("raj"); // mpp.erase (key) mpp.erase (mpp.begin ()) ; // mpp.erase (iterator)
mpp. clear(); // entire map is cleaned up
// mpp.erase (mpp.begin(), mpp.begin()+ 2); // cleans up a given range
auto it = mpp. find("raj"); // points to where raj lies
if (mpp.empty ()) {
cout << "Yes it is empty";
}
mpp. count ("raj");
    return 0;
}