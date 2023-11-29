#include<iostream>
using namespace std;
bool areSimilar(vector<vector<int> >& mat, int k) {
    int numsRows=mat.size();
    int numCols = mat[0].size();
    for(int i =0;i<k;i++){
        for(int j =0;j<numsRows;j++){
            int temp=mat[j][i];
            mat[j].erase(mat[j].begin() + i);
            mat[j].push_back(temp);
        }
    }
      return true;  
    }
int main(){ 
       vector<vector< int > >m;
       vector<int> el1;
       vector<int> el2;
       vector<int>el3;
       el1.push_back(1);
       el1.push_back(2);
       el1.push_back(1);
       el1.push_back(2);
       m.push_back(el1);
       el2.push_back(5);
       el2.push_back(5);
       el2.push_back(5);
       el2.push_back(5);
       m.push_back(el2);
       el3.push_back(6);
       el3.push_back(3);
       el3.push_back(6);
       el3.push_back(3);
       m.push_back(el3);
       bool result =areSimilar(m,2);
       cout<<result<<endl;


    return 0;
}