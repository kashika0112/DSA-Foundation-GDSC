class Solution {
public:

    int searchInsert(vector<int>& nums, int target) {
        int l, mid, h, i;
        l = 0;
        h = nums.size() - 1;
        while( l <= h){
            mid = (l + h)/2;
            if(target == nums[mid])
                return mid;
            else if(target < nums[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        i = 0;
        while(nums[i] < target){
            cout<<nums[i]<<endl;
            if(i == nums.size() - 1){
                i++; 
                break;
            }
            i++;
        }
        return i;
    }
};