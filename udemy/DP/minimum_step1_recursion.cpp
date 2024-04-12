#include <iostream>
#include <algorithm>

using namespace std;

int minimumstep(int n){
     int countx = INT_MAX,county = INT_MAX,countz = INT_MAX;
    if(n==1){
        return 0;
    } 
    if(n%3==0){
        countz = 1 + minimumstep(n/3);
    }
    if(n%2==0){
        county = 1 + minimumstep(n/2);
    }
    countx = 1 + minimumstep(n-1);

    return min(countx, min(countz, county));
}

int main() {
    cout << minimumstep(7) << endl; 
    int ans = INT_MAX;
    // cout<<ans<<endl;
    return 0;
}
