#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertice, edge;
    cout<<"enter the number of vertice in graph: ";
    cin>>vertice;
    cout<<"enter the number of edges in graph: ";
    cin>>edge;
    vector<vector<int> > v(vertice,vector<int>(vertice,0));
    return 0;
}