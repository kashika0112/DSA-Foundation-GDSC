class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        //Using Prefix Sum for both right and left
        int n = nums.size();
        vector<int> leftsum(n);
        vector<int> rightsum(n);
        
        //Left Sum
        leftsum[0] = 0;
        for(int i=1; i<n; i++){
            leftsum[i] = leftsum[i-1] + nums[i-1];
        }
        
        //Right Sum
        rightsum[n - 1] = 0;
        for(int i = n - 2; i>=0 ; i--){
            rightsum[i] = rightsum[i+1] + nums[i+1];
        }
        
        for(int i =0; i<n; i++){
            if(leftsum[i] == rightsum[i])
                return i;
        }
        return -1;
    }
};