class Solution {
public:
    vector<vector<int>>genmatr(int n,vector<vector<int>>&genmat,int top,int bottom,int left,int right,int& k){
        if (top > bottom || left > right)
            return genmat;
    for(int i = left;i<=right;i++){
        genmat[top][i] = k++;
    }
    top++;
    for(int i = top;i<=bottom;i++){
        genmat[i][right] = k++;
    }
    right--;
    if(top<=bottom){
    for(int i = right;i>=left;i--){
        genmat[bottom][i] = k++;
    }
    bottom--;
    }
    if(left<=right){
        for(int i = bottom;i>=top;i--){
            genmat[i][left] = k++;
        }
        left++;
    }
     return genmatr(n, genmat, top, bottom, left, right, k);
   
    }
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> genmat(n, vector<int>(n));
    int k = 1;
    return genmatr(n, genmat, 0, n - 1, 0, n - 1, k);  
    }
};