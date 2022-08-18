class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> m;
        int n = arr.size();
        
        for(int i = 0; i < n; i++) ++m[arr[i]];
        
        priority_queue<int> pq;
        
        for(auto it: m){
            pq.push(it.second);
        }
        
        int ans = 0, sum = 0;
        
        while(!pq.empty()){
            int temp = pq.top();
            pq.pop();
            sum += temp;
             ++ans;
            if(n-sum <= n/2) break;
        }
        
        return ans;
    }
};