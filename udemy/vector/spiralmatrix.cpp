#include<iostream>
#include<vector>
using namespace std;
#define r 10;
#define c 10;

int main(){
    int row,col;
    vector<int> vec;
    cin>>row>>col;
    int arr[3][3];
    for(int i = 0;i<3;i++){
        for(int j =0;j<3l;j++){
            cin>>arr[i][j];
        }
    }
     for(int i = 0;i<3;i++){
        for(int j =0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int count =1;
    int sr = 0;
    int sc = 0;
    int er = row-1;
    int ec = col-1;
while(sr<=er&&sc<=ec){
 //1) printing the  firt row
    for(int i = sc;i<ec;i++){
        cout<<arr[sr][i]<<" ";
        vec.push_back(arr[sr][i]);
        count++;
    }if(count==row*col){
        break;
    }

    //2) end colo
    for(int i = sr;i<er;i++){
        cout<<arr[i][ec]<<" ";
        vec.push_back(arr[i][ec]);
        count++;
    }
    if(count==row*col){
        break;
    }
    // 3) end row
     for(int i = ec;i>sc;i--){
        cout<<arr[er][i]<<" ";
        vec.push_back(arr[er][i]);
        count++;
    } 
     if(count==row*col){
        break;
    }
    // 4) first col
     for(int i = er;i>ec;i--){
        cout<<arr[ec][i]<<" ";
        vec.push_back(arr[i][sc]);
        count++;
    } 
     if(count==row*col){
        break;
    }
    sc++;
}
cout<<"\n"<<"there is the count: "<<count<<endl;
for(int i =1;i<=count;i++){
    cout<<vec[i]<<" ";
}
    return 0;
}