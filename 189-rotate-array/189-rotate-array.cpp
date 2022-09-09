class Solution {
public:
    //Brute-Force Approach 
//     void cycle(vector<int> &nums, int n){
//         int temp = nums[n - 1];      
//         for(int i = 0; i < n; i++){
//             int t2 = nums[i];
//             nums[i] = temp;
//             temp = t2;
//         }
//     }
    
    void reverse(int start, int last, vector<int> &nums){
        while(start < last){
            swap(nums[start], nums[last]);
            start++;
            last--;
        }
    }
    
    void rotate(vector<int>& nums, int k) {
        //O(n) time & o(n) space
        //int n = nums.size();
        //vector<int> v(n);
        //for(int i = 0; i < n; i++) v[(i+k)%n] = nums[i];
        //for(int i = 0; i < n; i++) nums[i] = v[i]; 
        
        //O(n) Time & 0(1) memory
        int n = nums.size();
        k = k%n;
        reverse(0, n-1, nums);
        reverse(0, k-1, nums);
        reverse(k, n-1, nums);
    }
};