class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        
        for(int i = 0; i<n; i++){
            if( i> 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = n - 1;
            
            while(j < k){
                int current_sum = nums[i];
                current_sum += nums[j];
                current_sum += nums[k];
                
                if(k < n-1 && nums[k] == nums[k+1]){
                    k--;
                    continue;
                }
                    
                
                else if(current_sum == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                }
                else if(current_sum < 0){
                    j++;
                }
                else
                    k--;
            }
        }
        return ans;
    }
};