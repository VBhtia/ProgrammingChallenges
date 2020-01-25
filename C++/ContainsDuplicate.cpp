class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map <int, int> finalVal;
        int itr{0};
        
        while(itr < nums.size()){
            
            
            if(finalVal.count(nums.at(itr)) != NULL){
                
                return true;
            }
            finalVal.insert (std::pair<int,int>(nums.at(itr),1) );
          itr ++;
        }
        
        return false;
        
    }
};