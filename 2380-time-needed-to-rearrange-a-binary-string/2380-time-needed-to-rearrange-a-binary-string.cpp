class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n=s.length();
        int zero=0;
        int last=0;
        int ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                zero++;
            }else{
                if(zero){
                    last=max(zero,last+1);
                    ans=max(ans,last);
                }
            }
        }
        return ans;
    }
};