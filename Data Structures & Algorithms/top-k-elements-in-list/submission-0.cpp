class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);
        for(int i = 0; i < nums.size(); i++){
            count[nums[i]]++;
        }
        for(auto& [val , c] : count){
            freq[c].push_back(val);
        }

        vector<int> ans;
        for(int i = freq.size() - 1; i > 0; i--){
            for(int n : freq[i]){
                ans.push_back(n);
                if(ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;

    }
};
