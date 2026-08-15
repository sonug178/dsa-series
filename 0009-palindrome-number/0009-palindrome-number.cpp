class Solution {
public:
    bool isPalindrome(int x){
     long long sum = 0;
        int n = x;
        if (x<0) return false;
        while(x!=0 && x>=0){
            int lastdigit = x%10;
            sum = sum*10 + lastdigit;
            x= x/10;
        }
        if(n==sum) return true;
        else return false;
    }
};