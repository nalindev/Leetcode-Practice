class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int f = 0, s = 0, n = nums.size();
        
        // while(s < n){
        //     if(nums[f] == nums[s]){
        //         ++s;
        //     }else{
        //         nums[f+1] = nums[s];
        //         ++f;
        //         ++s;
        //     }
        // } 
        
        for(int i = 0; i < n; i++){
            if(nums[f] != nums[i]){
                nums[f+1] = nums[i];
                ++f;
            }
        }
        return f+1;
    }
};