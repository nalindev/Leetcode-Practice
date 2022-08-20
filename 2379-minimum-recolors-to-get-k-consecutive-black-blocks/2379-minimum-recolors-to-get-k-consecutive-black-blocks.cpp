class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans = 0, n = blocks.size();
        
        for(int i = 0; i <= n-k; i++){
            int count = 0;
            
            for(int j = i; j < k+i; j++){
                if(blocks[j] == 'B') ++count;
            }
            
            ans = max(ans, count);
        }
        
        return k-ans;
    }
};