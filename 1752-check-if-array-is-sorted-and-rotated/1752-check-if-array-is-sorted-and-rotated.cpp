class Solution {
public:
    bool check(vector<int>& nums) {
        int mn = INT_MAX, pos = 0, n = nums.size();
        
        for(int i = 0; i < n; i++){
            if(nums[i] < mn || nums[i] == mn && nums[i] != nums[i-1]){
                mn = nums[i];
                pos = i;
            }
        }
        
        for(int i = pos; i < n + pos - 1; i++){
            if(nums[(i+1)%n] >= nums[i%n]) continue;
            else return false;
        }
        
        return true;
    }
};