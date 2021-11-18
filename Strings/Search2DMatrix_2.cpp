class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int i = 0, j = n-1; i<m && j>=0;)
        {
            if(target > matrix[i][j]){
                i++;
            } 
            else if(target == matrix[i][j]){
                return true;
            }
            else{
                j--;
            }
        }
        return false;
    }
};