class RecentCounter {
    queue <int> recentCalls;
public:
    RecentCounter() {
        
        
    }
    
    int ping(int t) {
       
        recentCalls.push(t);
         while (recentCalls.size()!=0 && recentCalls.front() < t - 3000) {
            recentCalls.pop();
        }
        return recentCalls.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */