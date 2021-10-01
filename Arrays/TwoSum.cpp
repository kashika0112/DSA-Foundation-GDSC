class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        unordered_map<int, int> ::iterator it;
        vector<int> ans;
        int n = nums.size();
        int add;
        for(int i =0; i<n; i++){
            add = target - nums[i];
            it = s.find(add);
            if(it != s.end()){
                ans.push_back(it->second);
                ans.push_back(i);
            }
            s.insert(make_pair(nums[i], i));
        }
        return ans;
    }
};