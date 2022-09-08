class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int f = 0, s = 0, n = nums.size();
        
        while(s < n){
            if(nums[f] == nums[s]){
                ++s;
            }else if(nums[f] != nums[s]){
                nums[f+1] = nums[s];
                ++f;
                ++s;
            }
        }
        
        return f+1;
    }
};