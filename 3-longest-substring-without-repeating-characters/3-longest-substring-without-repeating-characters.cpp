class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        unordered_map<char, int> m;
        int left = 0, ans = 0;
        
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
            
            while(m[s[i]] > 1){
                m[s[left]]--;
                ++left;
            }
            
            if(i - left + 1 > ans)
                ans = i - left + 1;
        }
        
        return ans;
    }
};