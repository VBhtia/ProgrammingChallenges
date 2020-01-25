class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        if (nums.size()==1){
            
            return nums.at(0);
        }
        
    int minVal{nums.at(0)};
    int maxVal{nums.at(0)};
        
    int finalVal{maxVal};
    int i{1};
        
    while(i<nums.size()){
        
        int oldMin{minVal};
        int oldMax{maxVal};
        
        minVal = min (nums.at(i), min (nums.at(i)*oldMin, nums.at(i)*oldMax));
        
        maxVal = max (nums.at(i), max (nums.at(i)*oldMin, nums.at(i)*oldMax));
        finalVal = max(finalVal,maxVal);
        i++;
    }
        
 return finalVal;
        
    }
};