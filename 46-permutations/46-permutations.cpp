class Solution {
public:
    void solve(vector<int> nums, int pos, vector<vector<int>> &ans){
        if(pos == nums.size()){
            ans.push_back(nums);
            return;
        }
            for (int j = pos; j < nums.size(); j++) {
                swap(nums[pos], nums[j]);
                solve(nums, pos + 1, ans);
            }
        
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        
        solve(nums, 0, ans);
        
        return ans;
    }
};