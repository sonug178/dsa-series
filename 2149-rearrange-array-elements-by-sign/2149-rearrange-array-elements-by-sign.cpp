class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int poIndex = 0;
        int neIndex = 1;
        for(int i = 0;i < n;i++){
            if(nums[i]>0){
                ans[poIndex] = nums[i];
                poIndex += 2;
            }
            else{
                ans[neIndex] = nums[i];
                neIndex += 2;
            } 
        }

         return ans;
    }
};