class Solution {
public:
    void reverseString(vector<char>& s) {
        int var{s.size()};
        if (var>0){
        int itr{0};    
            while (itr < (var / 2)) {          
           
                int itr2 = var- 1 - itr;
                if (s[itr] != s[itr2]) {
                    char tempVal = s[itr];
                    s[itr] = s[itr2];
                    s[itr2] = tempVal;
                }
             itr++;
            } 
            
            
        }
        
    }
};