class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        map<int, int> m;
        
        for(int i = 0; i < items1.size(); i++){
            m[items1[i][0]] += items1[i][1]; 
        }
        
        for(int i = 0; i < items2.size(); i++){
            m[items2[i][0]] += items2[i][1]; 
        }
        
        vector<vector<int>> ans;
        
        for(auto x : m){
            ans.push_back({x.first, x.second});
            //cout << x.first << " " << x.second << endl;
        }
        
        return ans;
    }
};