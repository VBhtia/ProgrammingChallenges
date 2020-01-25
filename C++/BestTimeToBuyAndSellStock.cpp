class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int val{prices.size()};
        
        if (val<=1){
            
            return 0;
         }
    
      int lowVal{prices.at(0)};
      int highVal{prices.at(1)-lowVal};
      int itr{2};
        
      while(itr < prices.size()){
          
          if (lowVal > prices.at(itr-1)){
              
              lowVal = prices.at(itr-1);
          }
          
          if (highVal < (prices.at(itr)-lowVal)){
              
              highVal = prices.at(itr)-lowVal;
          }
          itr ++;
      }
     
        if (highVal < 0){
            
            return 0;
        } else {
            
            return highVal;
        }
        
    }
};