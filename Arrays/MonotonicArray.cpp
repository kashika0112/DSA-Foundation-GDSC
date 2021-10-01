class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incr = true;
        bool decr = true;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] > nums[i+1])
                incr = false;
            if(nums[i] < nums[i+1])
                decr = false;
        }
        return incr || decr;
    }
};