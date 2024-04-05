#include <iostream>
#include <vector>
#include <set>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    set<int> s;
    // cout << "line1" << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);
    }
    // cout << "line2" << endl;
    int i =0;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            nums[i] = *it;
            i++;
        }
    // cout << "line 3" << endl;
    return s.size();
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