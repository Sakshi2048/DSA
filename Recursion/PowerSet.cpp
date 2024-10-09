#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, int ind, vector<vector<int>> &ans, vector<int> temp)
{
    if (ind >= nums.size())
    {
        ans.push_back(temp);
        return;
    }
    solve(nums, ind + 1, ans, temp);

    temp.push_back(nums[ind]);

    solve(nums, ind + 1, ans, temp);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp;

    int index = 0;

    solve(nums, index, ans, temp);

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}