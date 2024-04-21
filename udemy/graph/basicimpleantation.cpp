#include<iostream>
#include<vector>
using namespace std;
void print(vector<vector<int> >matrix,int sv,vector<bool> &visted){
    cout<<sv<<endl;
    visted[sv]= true;
    int n = matrix.size();
    for(int i  =0;i<n;i++){
        if(matrix[sv][i]==1&&visted[i]==false){
            print(matrix,i,visted);
        }
    }

}
int main(){
    int edge,vertice;
    cout<<"enter the no of vertice: ";
    cin>>vertice;
    cout<<"enter the edges: ";
    cin>>edge;
    vector<vector<int> >matrix(vertice,vector<int>(vertice,0));
    cout<<"enter the path of edges"<<endl;
    for(int i =1;i<=edge;i++){
        int fv,sv;
        cout<<"enter the first vertice: ";
        cin>>fv;
        cout<<"enter the second vertice: ";
        cin>>sv;  
        matrix[fv][sv]=1;
        matrix[sv][fv]=1;
    }
    vector<bool> visted(vertice,false);
    print(matrix,0,visted);

    return 0;
}