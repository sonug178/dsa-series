class Solution {
public:
    bool isPowerOfThree(int n) {
  if(n <= 0) return false;
  if(n == 1) return true;
  double m = n;
  while(abs(m)>1){
  m= m/3;
 }
  double x =m-floor(m);
  if(x == 0) return true;
  return false;
}
};