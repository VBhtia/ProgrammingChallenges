class Solution {
public:
    int trap(vector<int>& height){
        
        if (height.size() == 0){
            return 0;
        }
    
    
    int firstSec{0};
    int totValue {0};
    int secondSec = height.size() -1 ; 
    int maxFirstSec {height[firstSec]};
    int maxSecondSec{height[secondSec]};
    
    while (secondSec > firstSec + 1){
        if (maxFirstSec < maxSecondSec){
            
            firstSec = firstSec + 1;
            
            if (height[firstSec]> maxFirstSec){
                
                maxFirstSec = height [firstSec];
            }
            else {
                 
                totValue += maxFirstSec - height[firstSec];
            }
        }
        else {
            secondSec = secondSec -1;
            if (height[secondSec] > maxSecondSec) {
                    maxSecondSec = height[secondSec];
            } else{
                    totValue = totValue + maxSecondSec - height[secondSec];  
                }           
        }
        
    }
    
    return totValue;

    }
};