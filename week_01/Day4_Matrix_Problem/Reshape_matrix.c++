
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size(), n = mat[0].size();
        if (m * n != r * c) return mat;
        
        vector<int> flat;
        for (auto& row : mat) {
            for (int num : row) flat.push_back(num);
        }
        
        vector<vector<int>> newMatrix(r, vector<int>(c));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                newMatrix[i][j] = flat[i * c + j];
            }
        }
        
        return newMatrix;
    }
};
