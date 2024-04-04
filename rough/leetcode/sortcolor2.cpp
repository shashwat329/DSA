// using dutuch flag algo
// =[1,0,0,2,1,2,0,1,1]
//[0,0,0,1,1,1,2,2]
#include <iostream>
#include <vector>

using namespace std;
void sort(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;
    int mid = 0;
    while (mid < high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            mid++;
            low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            mid++;
            high--;
        }
    }
 
}
int main()
{
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(0);
  
    nums.push_back(2);

    sort(nums);
    for (int i = 0; i < nums.size() - 1; i++)
    {
        cout << nums[i] << " ";
    }
}