class Solution {
public:
    bool isPowerOfTwo(int n) {
  double x = log2(double(n));
  double m = x - floor(x);
  if(m == 0) return true;
  return false;
}
};