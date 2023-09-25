#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    vector <int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int mini = *min_element(vec.begin(),vec.end());
    cout<<"the minimum element in the array is "<<mini<<endl;
    return 0;
}