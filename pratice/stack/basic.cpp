// stacks linear data struture which flow lifo(last in and first out)
/*basic functions are
push : use to add element 
emplace : use to add element but a bit faster than push
pop : to cut the top element at stack
top : gives u element at the top at stack
size : gives the size of the stacks
empty : gives a bool value 0 and 1
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(2);
    cout<<"elements in the stack st is "<<endl;
    while (!st.empty())
    {
       cout<<st.top()<<endl;
       st.pop();
    }
    cout<<st.top();
    // NOTE: in stack there is only one way to way to print the elements which is by removing them
    // cout<<"There is the top element "<<st.top()<<endl;
    // st.pop();
    // cout<<st.top();
    // bool flag = st.empty();
    return 0;
}