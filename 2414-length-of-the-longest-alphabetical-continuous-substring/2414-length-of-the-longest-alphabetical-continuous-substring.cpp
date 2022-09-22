class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.length(), ans = 0, temp = 1;
        
        if(n == 1) return n;
        
        for(int i = 1; i < s.length(); i++){
            if(s[i] - s[i-1] == 1) ++temp;
            else temp = 1;
            
            ans = max(ans, temp);
        }
        
        return ans;
    }
};