class Solution {
public:
void two(vector<int>& nums, int target,vector<int>&ds){
     for(int i = 0 ; i<nums.size();i++){
            for (int j = i+1; j<nums.size();j++){
                if((nums[i]+nums[j])==target){
                    ds.push_back(i);
                    ds.push_back(j);
                }
            }

        }

}
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ds;
        two(nums,target,ds);
        return ds;

    }
};