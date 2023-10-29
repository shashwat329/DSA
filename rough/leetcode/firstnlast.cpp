// find the first and last occurrance of the element
#include<iostream>
using namespace std;
int firstocc(vector <int> &nums,int target){
    int s =0;
    int e = nums.size()-1;
    int ans =-1;
    while(s<=e){
       int mid = s-(s-e)/2;
       if(target==nums[mid]){
       ans = mid;
       e=mid-1;
       }
       else{
        if(target>nums[mid]){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
       }
    }
    return ans;
}
int lastocc(vector <int> &nums,int target){
    int s =0;
    int e = nums.size()-1;
    int ans =-1;
    while(s<=e){
       int mid = s-(s-e)/2;
       if(target==nums[mid]){
       ans = mid;
       s=mid+1;
       }
       else{
        if(target>nums[mid]){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
       }
    }
    return ans;
}
int main(){
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    int n = 12;
    int target= 3;
   int  first_occ = firstocc(arr,target);
   int  last_occ = firstocc(arr,target);
   cout<<first_occ<<" "<<last_occ<<" "<<endl;

    return 0;
}