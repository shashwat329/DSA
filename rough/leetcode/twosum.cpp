#include<iostream>
using namespace std;
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
       for(int i =0;i<nums.size();i++){
        for(int j = i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
            }
        }
    return ans;
       } 
int main(){
    vector <int> arr;
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(11);
    arr.push_back(15);
    int k = 9;
    vector<int> ans = twoSum(arr,k);
    for(int  i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}