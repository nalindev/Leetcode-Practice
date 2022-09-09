class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // O(n) Time complexity & O(n) space
        //set<int> s;
        //for(auto x : nums) s.insert(x);
        //for(int i = 0; i <= nums.size(); i++) if(!s.count(i)) return i;
        //return -1;
        
        // Bit Manipulation O(n) Time Complexity & O(1) space 
        int temp = 0;
        
        for(int i = 1; i < nums.size()+1; i++){
            temp ^= i;
        }
        
        for(int i = 0; i < nums.size(); i++){
            temp ^= nums[i];
        }
        
        return temp;
    }
};