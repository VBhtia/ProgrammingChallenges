class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int bitNum{0};
        
        while (n != 0){
            
            bitNum = bitNum + (n & 1);
            n >>= 1;
        }
       return bitNum; 
    }
};