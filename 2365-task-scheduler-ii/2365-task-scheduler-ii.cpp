class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        long long count = 0;
        map<long long, long long> m;
        
        for(int i = 0; i < tasks.size(); i++){
            if(m.find(tasks[i]) == m.end()){
                m[tasks[i]] = count + space + 1;
                ++count;
                continue;
            }
            
            if(m[tasks[i]] > count){
                count = m[tasks[i]];
            }
            m[tasks[i]] = count + space + 1;
            ++count;
        }
        
        return count;
    }
};