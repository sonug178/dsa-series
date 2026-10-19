class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    vector<vector<int>>newmp(r,vector<int>(c));
    int m = mat.size();
    int n = mat[0].size();
    int x = 0;
    int y = 0;
    if(m*n != r*c) return mat;
    for(int i = 0; i<m;i++){
        for(int j = 0;j<n;j++){
            newmp[x][y] = mat[i][j];
            y++;
            if(y == c){
                x++;
                y = 0;
            }
        } 
    }
    return newmp;
    }
};