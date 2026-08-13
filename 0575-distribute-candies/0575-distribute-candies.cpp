class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> set(candyType.begin(),candyType.end());
        int count = set.size();
        int n = candyType.size();
        return min(n/2,count);
    }
};