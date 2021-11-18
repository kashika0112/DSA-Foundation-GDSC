class Solution {
public:
    int BinarySearch(vector<int> arr, int low, int high, int tar)
    {
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            
            if(tar == arr[mid]){
                return mid;
            }
            else if(tar > arr[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int index;
        for(int i = 0; i<matrix.size(); i++){
            if(target >= matrix[i][0] && target <= matrix[i][matrix[0].size() - 1]){
                index = BinarySearch(matrix[i], 0, matrix[0].size() - 1, target);
                if(index != -1){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return false;
    }
};