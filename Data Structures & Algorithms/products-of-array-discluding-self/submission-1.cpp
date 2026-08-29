class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        bool containsZero = false;
        bool containsMoreZero = false;
        for(auto& i : nums){
            if(i == 0 && containsZero == false){
                containsZero = true;
            }else if(i == 0 && containsZero == true){
                containsMoreZero = true;
            }
            else prod*=i;
        }
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(containsMoreZero){
                return vector<int>(nums.size(), 0);
            }
            if(containsZero){
                if(nums[i] == 0){
                    ans.push_back(prod);
                }else{
                    ans.push_back(0);
                }
            }
            else
            ans.push_back(prod/nums[i]);
        }
        return ans;
    }
};
