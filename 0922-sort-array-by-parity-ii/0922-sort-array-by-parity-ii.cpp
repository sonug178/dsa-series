class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
    int j = 1;
    int n = nums.size();
    for(int i = 0;i<n;i+=2){
        if(nums[i]%2 !=0){
            while(nums[j]%2 !=0){
                    j +=2;
                }
                swap(nums[i],nums[j]);
        }
    }
    return nums;
    }
};