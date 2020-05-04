class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int i=0; i<matrix.size()-1; i++){
            for (int j=i+1; j<matrix.size(); j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for (auto& p:matrix){
            reverse(p.begin(), p.end());
        }
    }
};
