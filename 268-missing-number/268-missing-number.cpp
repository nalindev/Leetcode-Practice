class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> s;
        for(auto x : nums) s.insert(x);
        
        for(int i = 0; i <= nums.size(); i++) if(!s.count(i)) return i;
        
        return -1;
    }
};