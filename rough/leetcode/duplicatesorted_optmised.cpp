#include <iostream>
#include <vector>
#include <set>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
   int i = 0;
  for (int j = 1; j < nums.size(); j++) {
    if (nums[i] != nums[j]) {
      i++;
      nums[i] = nums[j];
    }
  }
  return i + 1;
}
int main()
{
    vector<int> n;
    n.push_back(0);
    n.push_back(0);
    n.push_back(1);
    n.push_back(1);
    n.push_back(1);
    n.push_back(2);
    n.push_back(2);
    n.push_back(3);
    n.push_back(3);
    n.push_back(4);
    int ans = removeDuplicates(n);
    cout << ans << endl;
    for (int i = 0; i < n.size() - 1; i++)
    {
        cout << n[i] << " ";
    }

    return 0;
}