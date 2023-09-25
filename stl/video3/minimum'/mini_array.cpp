#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int,10> arr={1,2,3,6,5,4,2,5,10,12};
    int mini = INT_MAX;
    mini = *min_element(arr.begin(),arr.end());
    cout<<"the minimum element in the array is: "<<mini<<endl;
    return 0;
}