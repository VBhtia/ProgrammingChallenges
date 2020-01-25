class Solution {
public:
    bool hasAlternatingBits(int n) {
        
        int count {0};
        int value = n & 1;
        int  itr{0};        
        
        while (itr < 32){
            
        if ((n & (1 << itr)) > 0) {
        count = itr;
        }
        itr ++;
        }
        
        itr = 1;
        while (itr <= count){
            
        int interVal = (1 << itr) & n;
            
        if ((interVal > 0 && value > 0) || (interVal== 0 && value == 0)){
        return false;
        }
          
        value = interVal;
        itr ++;
            
        }
        return true;
    }
};