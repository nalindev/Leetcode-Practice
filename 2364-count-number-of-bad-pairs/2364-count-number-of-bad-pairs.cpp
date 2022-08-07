class Solution {
public:
    long long countBadPairs(vector<int>& v) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        unordered_map<long long,long long> m;
        long long n = v.size(), i = 0;
        
        for(i; i<n; i++){
            v[i] = v[i] - i;
            m[v[i]]++;
        }
        
        long long soln = (n*(n-1))/2;
        
        for(auto it : m)
            soln -= ( it.second * ( it.second - 1) )/2ll;
        
        return soln;
    }
};