class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), first = 0, zero = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                nums[first] = nums[i];
                ++first;
            }else{
                ++zero;
            }
        }
        //cout << zero << endl;
        for(int i = n - 1; i >= 0 && zero--; i--) nums[i] = 0;
    }
};