// taking an array dividing it into 2 parts sort both first and second arrray

#include<iostream>
using namespace std;
void mergeshot(int arr[],int n,vector<int> v){
    if(n==0){
        cout<<"there is no element in the array: ";
        return;
    }
    if(n==1){
        return;
    }
    int mid = n/2;
    int s1,s2;
    for(s1=0,s2=mid;s1==mid-1||s2==n-1;s1++,s2++){
        if(arr[s1]>arr[s2]){
            v.push_back(arr[s2]);
            s2++;
        }
        else{
            v.push_back(arr[s1]);
            s1++;
        }
    }
    if(s1==mid-1){
       sort(arr+s2,arr+n);
        for(int i=s2;i<n;i++){
            v.push_back(arr[i]);
        }
    }
    else{
        sort(arr+s1,arr+mid);
        for(int i=s1;i<mid;i++){
            v.push_back(arr[i]);
        }
    }
}
int main(){
    int arr[]={1,4,2,3,6,8,0};
    int n=7;
    vector <int> v;
    cout<<"before mergsort: "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    mergeshot(arr,n,v);
    cout<<"\nafter mergsort: "<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}