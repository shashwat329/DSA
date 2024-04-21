#include<iostream>
#include<vector>
using namespace std;
void printmatrix(vector<vector<int> >v){
    int m = v.size();
    int n = v[0].size();
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void print(vector<vector<int> >v,int src,vector<bool> &visited){
    cout<<src<<" ";
    // we need the a array to check visited array
    visited[src]= true; 
    for (int  i = 0; i < v.size(); i++)
    {
        if(v[src][i]==1&&visited[i]==false){
            print(v,i,visited);
        }
    }
    
}
int main(){
    int vertice,edge;
    cout<<"enter the number of vertice: ";
    cin>>vertice;
    cout<<"enter the number of edges: ";
    cin>>edge;

    vector<vector<int> > matrix(vertice,vector<int>(vertice,0));
    for(int i =0;i<edge;i++){
        int fv,sv;
        cin>>fv>>sv;
        matrix[fv][sv]=1;
        matrix[sv][fv]=1;
    }
    cout<<"The adjance matrix is "<<endl;
    printmatrix(matrix);
    // visted array
    vector<bool> visited(vertice,false);
    print(matrix,0,visited);
    return 0;
}