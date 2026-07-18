class Solution {
public:
   int gcd_euclidean(int a,int b){
   if(b%a == 0) return a;
   int c;
   c = b%a;
   b = a;
   a = c;
   return gcd_euclidean(a,b);
}
int findGCD(vector<int>&nums){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int n = nums.size();
    for(int i=0;i<n;i++){
        maxi = max(maxi,nums[i]);
        mini = min(mini,nums[i]);
    }

    int gcd_d = gcd_euclidean(mini,maxi);
    return gcd_d;

}
};