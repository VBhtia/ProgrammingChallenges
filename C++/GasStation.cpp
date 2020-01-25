class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
       int val{0};
       int startVal{0};
       int finalVal{0};
       int itr{0};
        
       while(itr < gas.size()){
           
           finalVal = finalVal + (gas.at(itr)-cost.at(itr));
       
          if (finalVal <0){
              
              val= val + finalVal;
              finalVal = 0;
              
              startVal= itr+1;
          }
           itr ++;
       }
     val = val + finalVal;
      
        if (val >= 0){
            
            return startVal;
        } else {
            
            return -1;
        }
    }
};