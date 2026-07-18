class Solution {
public:
    int gcd(int a ,int b){
    int gcd_ = INT_MIN;
    int m = max(a,b);
    for(int i = 1;i<m+1;i++){
        if(a%i == 0 && b%i ==0){
            gcd_ = max(gcd_,i);
        }

    }
    return gcd_;  
}

int findGCD(vector<int>&nums){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int n = nums.size();
    for(int i=0;i<n;i++){
        maxi = max(maxi,nums[i]);
        mini = min(mini,nums[i]);
    }

    int gcd_d = gcd(maxi,mini);
    return gcd_d;

}
};