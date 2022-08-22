class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans = 0, n = blocks.size();
        
        for(int i = 0; i < k; i++){
            if(blocks[i] == 'B') ++ans;
        }
        
        int count = ans;
        
        for(int i = k; i < n; i++){
            if(blocks[i] == 'B') ++count;
            if(blocks[i - k] == 'B') --count;
            
            ans = max(ans, count);
        }
        
        return k-ans;
    }
};