class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int l = 0, r = matrix.size()-1;
        while(l < r){
            swap(matrix[l], matrix[r]);
            l++;
            r--;
        }
        
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = i + 1; j < matrix[i].size(); ++j)
                swap(matrix[i][j], matrix[j][i]);
        }
    }
};