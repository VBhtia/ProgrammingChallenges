class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        if (nums.size()==0){
            
            return -1;
        }
        
        int firstSum{0};
        int secondSum{0};
        int itr1{1};
        int itr2{0};
        
        while(itr1<nums.size()){
            
            secondSum = secondSum + nums.at(itr1);
            itr1++;
        }        
        if (firstSum == secondSum){
            return 0;
        }
        while(itr2< nums.size()-1){
            
            firstSum  = firstSum + nums.at(itr2);
            secondSum = secondSum - nums[itr2+1];
            
            if(firstSum == secondSum){
                
                return (itr2 +1);
            }
            itr2++;
        }
        return -1;
    }
};