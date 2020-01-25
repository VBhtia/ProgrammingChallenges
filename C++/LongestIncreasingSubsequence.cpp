class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if (nums.size() == 0){
            
            return 0;
        }
    vector<int>lenVal;
    int maxVal{INT_MIN};
        
     for (int i = 0, l = nums.size(); i < l; i++) {
      int listVal = 1;
      for (int j = 0; j < i; j++) {
      
      if (nums[i] > nums[j]){ 
      
          listVal = max(listVal, lenVal[j] + 1);
      }
      }
      lenVal.insert(lenVal.begin() + i, listVal);
      maxVal = max(maxVal, lenVal[i]);
    }
        return maxVal;
    }
};