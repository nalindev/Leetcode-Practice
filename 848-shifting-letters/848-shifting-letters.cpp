class Solution {
public:
    char cycle(char &ch, long long n){
        long long nv = int(ch) + (n%26);
        if(nv<'a') nv += 26;
        if(nv>'z') nv -= 26;
        return char(nv);
    }
    
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.length();
        vector<long long> v(n+1, 0);
        
        for(int i = 0; i < n; i++){
            v[0] += shifts[i];
            v[i+1] -= shifts[i];
        }
        
        for(int i = 1; i < v.size(); i++) v[i] += v[i-1];
        
        for(int i = 0; i < n; i++) s[i] = cycle(s[i], v[i]);
        
        return s;
    }
};