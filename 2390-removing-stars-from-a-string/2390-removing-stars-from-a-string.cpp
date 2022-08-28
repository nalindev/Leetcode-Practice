class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        int count = 0;
        
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] == '*') ++count;
            else if(count != 0) --count;
            else ans.push_back(s[i]);
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};