class Solution {
public:
  char cycle(char ch, int n){
        int nv = int(ch) + (n%26);
        if(nv<'a') nv += 26;
        if(nv>'z') nv -= 26;
        return char(nv);
    }
    
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> v(n+1, 0);
        
        for(int i = 0; i < shifts.size(); i++){
            int s = shifts[i][0], e = shifts[i][1], dir = (shifts[i][2] == 1 ? 1 : -1);
            
            v[s] += dir; v[e+1] -= dir;
        }
        
        //difference array 
        for(int i = 1; i < n+1; i++){
            v[i] += v[i-1];
        }
        
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
            s[i] = cycle(s[i], v[i]);
        }
        
        return s;
    }
};