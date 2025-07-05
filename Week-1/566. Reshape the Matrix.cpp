class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int m=mat.size();
        int n=mat[0].size();
        if (m * n != r * c) return mat;
        vector<int>v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(mat[i][j]);
            }
        }
         vector<vector<int>> matt(r, vector<int>(c));
        int idx=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
               matt[i][j] = v[idx++];
            }
        }
    return matt;
    }
};
