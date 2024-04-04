#include<iostream>
#include<vector>

using namespace std;
 void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2 =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                cout<<nums[i]<<" nums[i]"<<endl;
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        cout<<count0<<endl;
        cout<<count1<<endl;
        cout<<count2<<endl;

        for(int i = 0;i<count0;i++){
            nums[i]=0;
        }  
        for(int i = count0;i<count0+count1;i++){
            nums[i]=1;
        } 
        for(int i =count0+count1;i<count0+count1+count2;i++){
            nums[i]=2;
        }
    }
int main(){
    vector<int> num;
    // {2,0,2,1,1,0};
    num.push_back(2);
    num.push_back(0);
    num.push_back(2);
    num.push_back(1);
    num.push_back(1);
    num.push_back(0);
    sortColors(num);
    for(int i=0;i<num.size();i++){
        cout<<num[i]<< " ";
    }

    return 0;
}