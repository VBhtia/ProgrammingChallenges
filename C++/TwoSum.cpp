class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        if (nums.size() ==0){
            
            return nums;
        }
       map <int, int> sumValue;
        
      for (int i=0; i< nums.size(); i++){
          
          int otherVal = target - nums.at(i);
          
          if(sumValue.count(otherVal)){
              
              return vector<int>{sumValue.at(otherVal), i};
          }
          else {
               sumValue.insert ( std::pair<int,int>(nums.at(i),i) );
          }
      }
        return {};
    }
};