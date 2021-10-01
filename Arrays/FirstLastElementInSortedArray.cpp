class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int startidx = -1;
        int endidx = -1;
        int mid;
        //Start Index
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high)
        {
            mid = (high - low)/2 + low;
            if(nums[mid] > target){
                high = mid - 1;
            }
            else if(nums[mid] == target){
                startidx = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        
        //End Index
        low = 0;
        high = nums.size() - 1;
        while(low <= high)
        {
            mid = (high - low)/2 + low;
            if(nums[mid] > target){
                high = mid - 1;
            }
            else if(nums[mid] == target){
                endidx = mid;
                low = mid + 1;
            }
            else{
                low = mid + 1;
            }
        }
        res.push_back(startidx);
        res.push_back(endidx);
        return res;
    }
};