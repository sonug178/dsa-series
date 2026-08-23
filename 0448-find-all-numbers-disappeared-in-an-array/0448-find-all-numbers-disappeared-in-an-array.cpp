class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int n = nums.size();
    vector<int>hashtable(n+1,0);
    vector<int>temp;
    for(int i =0;i<n;i++){
        hashtable[nums[i]] +=1;
    }
    for(int i = 1;i<=n;i++){
        if(hashtable[i] == 0){
            temp.push_back(i);
        }
    }
    return temp; 
      
    }
};