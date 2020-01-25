class Solution {
public:
    int hammingDistance(int x, int y) {
        
        int hamDist{0};
        int otherVal{x ^ y};
        
        while(otherVal!= 0){
            
            hamDist = hamDist + (otherVal & 1);
            otherVal>>=1; 
        }
        return hamDist;
    }
};