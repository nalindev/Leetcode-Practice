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
        
        //optimized it further but the running time is still same
        // for(int i = 0; i < n; i++){
        //     if(nums[f] != nums[i]){
        //         nums[f+1] = nums[i];
        //         ++f;
        //     }
        // }
        
        //looking for other solution 
        int count = 0;
for(int i = 1; i < n; i++){
    if(nums[i] == nums[i-1]) count++;
    else nums[i-count] = nums[i];
}
return n-count;
        
        //return f+1;
    }
};