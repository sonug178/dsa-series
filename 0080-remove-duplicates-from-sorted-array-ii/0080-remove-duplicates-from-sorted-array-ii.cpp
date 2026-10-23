class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    int count = 1;
    int i = 0;int j =1;
    if(n<=2) return nums.size();
    while(j<n){
        if(nums[i] != nums[j]){
            i=j;
            j++;
            count = 1;
        }
        else{
            count++;
            if(count>2){
                nums.erase(nums.begin()+j);
                n = nums.size();
            }
            else {
                j++;
            }
        }

       
    }
    return nums.size();
    }
};