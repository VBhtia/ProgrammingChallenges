class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int itr{0};
        int finalNum{0};
        
        while(itr < nums.size()){
            
            finalNum = finalNum ^ nums.at(itr); 
            itr++;
        }
        
        return finalNum;
        
    }
};