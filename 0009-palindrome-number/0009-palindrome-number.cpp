class Solution {
public:
    bool isPalindrome(int x){
        if(x<0) return false;
        string n = to_string(x);
        int m = n.length();
        int j = m-1;
        int i = 0;
        while(j>i){
            if(n[i] == n[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
        
    }
};