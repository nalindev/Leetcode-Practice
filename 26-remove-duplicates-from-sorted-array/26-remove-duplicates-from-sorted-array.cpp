class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int f = 0, s = 0, n = nums.size();
        // while(s < n){
        //     if(nums[f] == nums[s]){
        //         ++s;
        //     }else{
        //         nums[f+1] = nums[s];
        //         ++f;
        //         ++s;
        //     }
        // } 
        //return f+1;
        
        //optimized it further but the running time is still same
        // int f = 0, s = 0, n = nums.size();
        // for(int i = 0; i < n; i++){
        //     if(nums[f] != nums[i]){
        //         nums[f+1] = nums[i];
        //         ++f;
        //     }
        // }
        //return f+1;
        
        //looking for other solution - This code have better approach then me but complexity is same 
        // int count = 0, n = nums.size();
        // for(int i = 1; i < n; i++){
        //     if(nums[i] == nums[i-1]) count++;
        //     else nums[i-count] = nums[i];
        // }
        // return n-count;
        
        int i = !nums.empty();
    for (int n : nums)
        if (n > nums[i-1])
            nums[i++] = n;
    return i;
    }
};