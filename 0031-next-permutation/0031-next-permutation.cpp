class Solution {
public:
  void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n-1;
    int ind = -1;

    while(i>0){
        if(nums[i-1]<nums[i]){
            ind = i-1;
            break;
        }
        i--;
    }

    if(ind == -1){
        reverse(nums.begin(),nums.end());
        return;
    }

    i =n-1;

    while(i>ind){
        if(nums[i]>nums[ind]){
            swap(nums[i],nums[ind]);
            break;
        }
        i--;
    }

    reverse(nums.begin()+ind+1,nums.end());
}
};