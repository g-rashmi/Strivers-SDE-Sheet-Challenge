class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix[0].size();
        int n = matrix.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < m; j++) {
                
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    
        for(auto &i:matrix){
            reverse(i.begin(),i.end());
        }
    }
};
