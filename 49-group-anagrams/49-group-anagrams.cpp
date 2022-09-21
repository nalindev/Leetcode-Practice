class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp;
        vector<vector<string>> ans;
        int n = strs.size();
        int arr[26] = {0};
        
        for(int i = 0; i < n; i++){
            string p = "", s = strs[i];
            int  k = s.length();
            for(int j = 0; j < k; j++){
                arr[s[j]-'a']++;
            }
            for(int j = 0; j < 26; j++){
                while(arr[j]){
                    p += j+'a';
                    arr[j]--;
                }
            }
            if(mp.find(p) == mp.end()){
                vector<string> v{s};
                ans.push_back(v);
                mp[p] = ans.size()-1;
            }
            else{
                ans[mp[p]].push_back(s);
            }
        }
        return ans;
    }
};