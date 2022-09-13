class Solution {
public:
    int partitionString(string s) {
        //minimum number of string in such partition 
        //abacaba
        set<char> st;
        int count = 1;
        
        for(int i = 0; i < s.length(); i++){
            if(st.count(s[i])){
                st.clear();
                ++count;
            }
            st.insert(s[i]);
        }
        
        return count;
    }
};