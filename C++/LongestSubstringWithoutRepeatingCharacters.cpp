class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if (s.length()== 0){
            
            return 0;
        }
         int maxLen{0};
        
        for (int i=0; i< s.length(); i++){
            
             set <char> subStringVal;
            
            for (int j = i; j<s.length();j++ ){
                
                char c = s[j];
                
                if(subStringVal.count(c)){
                    
                    break;
                }
                subStringVal.insert(c);
        
            }
            if (maxLen < subStringVal.size()){
                
                maxLen = subStringVal.size();
            }
        }
        
       
        
       return maxLen;
        
    }
};