class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
   if (nums.size() == 0) 
   {
       return 0;
   }
    int itr2{0};
    int val{1};
    int itr1{1};
        
    while (itr1<nums.size()){
        
     if (nums.at(itr1 - 1) == nums.at(itr1)){
        val++;
      } 
     else{
        val = 1;
      }
      if (val == 1 || val == 2) {
        itr2++;
        nums[itr2] = nums[itr1];
      }
      itr1 ++;
    }
    return itr2 + 1;
  }
  
};