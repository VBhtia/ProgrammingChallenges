class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        
        int finalVal{0};
        
        for(int itr = 0; itr < 32; itr++) {
            
            finalVal <<= 1;
            
            if ((n & 1) == 1) finalVal = finalVal + 1;
            
            n = n>>1;
        }             
        
        return finalVal;
    }
    
};