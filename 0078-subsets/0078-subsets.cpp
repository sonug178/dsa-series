class Solution {
public:
  void subsets(int ind, vector<int>& ds, vector<int>& nums, int n,
             vector<vector<int>>& ans) {

    if(ind == n) {
        ans.push_back(ds);
        return;
    }

    subsets(ind + 1, ds, nums, n, ans);

    ds.push_back(nums[ind]);
    subsets(ind + 1, ds, nums, n, ans);
    ds.pop_back();
}

vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> ds;
    vector<vector<int>> ans;

    subsets(0, ds, nums, nums.size(), ans);

    return ans;
}
};