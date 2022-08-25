class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        
        for(int i = 0; i < magazine.size(); i++) ++m[magazine[i]];
        
        for(int j = 0; j < ransomNote.size(); j++){
            if(m[ransomNote[j]] <= 0) return false;
            else
                --m[ransomNote[j]];
        }
        
        return true;
    }
};