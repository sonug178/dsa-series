class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
    vector<int>even_temp;
    vector<int>odd_temp;
    int n = nums.size();
    for(int i = 0;i<n;i++){
        if(nums[i]%2==0){
            even_temp.push_back(nums[i]);
        }

        else{
            odd_temp.push_back(nums[i]);
        }
    }
    int m = even_temp.size();
    for(int i = 0;i<m;i++){
        nums[2*i] =even_temp[i];
        nums[2*i+1] = odd_temp[i];

    }
   return nums;
    }
};