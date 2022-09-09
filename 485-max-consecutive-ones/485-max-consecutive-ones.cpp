class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, count = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) ans = max(++count, ans);
            else count = 0;
        }
        return ans;
    }
};