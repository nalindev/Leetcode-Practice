class Solution {
public:
    int fib(int n) {
        //recursive approach
//         if(n == 0) return 0;
        
//         if(n == 1 || n == 2) return 1;
        
//         return fib(n-1)+fib(n-2);
        
        //DP approach
        vector<int> v(31);
        v[0] = 0;
        v[1] = 1;
        
        int ans = 0;
        for(int i = 2; i <= n; i++) v[i] = v[i-1]+v[i-2];
        
        return v[n];
    }
};