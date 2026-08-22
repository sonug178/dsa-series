class Solution {
public:
    int countDigits(int num) {
        int lastdigit;
        int m = num;
        int count = 0;
        while(num>0){
            lastdigit = num%10;
            num = num/10;
            if(m%lastdigit == 0) count++;
        }
        return count;
    }
};