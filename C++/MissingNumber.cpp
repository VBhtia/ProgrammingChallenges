class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int valOne{nums.size()};
        int valTwo{valOne + 1};
        int totVal{0};
        int finalVal{valOne * valTwo/2};
        
        for (int i=0; i<nums.size(); i++){
            
            totVal = totVal + nums.at(i);
        }
        return (finalVal - totVal);
    }
};