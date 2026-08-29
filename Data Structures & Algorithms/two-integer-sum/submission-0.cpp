class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++){
            int left = target - nums[i];
            if(mpp.contains(left)){
                return {mpp[left], i};
            }
            mpp[nums[i]] = i;
        }
        return {-1, -1};
    }
};
