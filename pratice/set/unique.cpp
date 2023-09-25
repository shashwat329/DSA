#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter any number: ";
    cin>>n;
    set <int> st;
    int x;
    for(int i = 0;i<n;i++){
        cin>>x;
        st.insert(x);
    }
    for(auto it = st.begin();it != st.end();it++){
        cout<<* it<<" ";
    }
   
    return 0;
}