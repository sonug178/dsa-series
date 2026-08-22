class Solution {
public:
    bool checkDivisibility(int n) {
        int lastdigit;
        int sum= 0;
        int product = 1;
        int final_sum = 0;
        int m = n;
        while(n>0){
            lastdigit = n%10;
            n = n/10;
            sum += lastdigit;
            product *= lastdigit;
        }
        final_sum = sum+product;
        if(m%final_sum == 0) return true;
        return false; 
    }
};