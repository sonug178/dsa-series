class Solution {
public:
    int thirdMax(vector<int>& nums) {
    int maxi = INT_MIN;
    int smaxi = INT_MIN;
    float tmaxi = -FLT_MAX;
    int n = nums.size();
    for(int i =0;i<n;i++){
        if(nums[i]>maxi){
            maxi = nums[i];
        }
    }
    for(int i  =0;i<n;i++){
        if(nums[i]>smaxi && nums[i]<maxi){
            smaxi = nums[i];
        }
    }
    for(int i = 0;i<n;i++){
        if(nums[i]>tmaxi && nums[i]<smaxi){
            tmaxi = nums[i];
        }
    }
    if(tmaxi == -FLT_MAX) return maxi;
    return tmaxi;
    }
};