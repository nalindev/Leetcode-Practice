class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x){
            if(ans > INT_MAX/10 || ans < INT_MIN/10) return 0;
                
            int last_digit = x%10;
            x /= 10;
            ans = ans*10 + last_digit;
        }
        
        return ans;
    }
};