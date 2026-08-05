class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int n  =nums.size();
    int mini = INT_MIN;
    int count = 0;
    for(int i  =0;i<n;i++){
        if(nums[i]==1){
            count++;
        }
        mini = max(count,mini);
        if(nums[i]!=1){
            count = 0;
        }
    }
    return mini;
    }
};