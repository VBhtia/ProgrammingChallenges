class Solution {
    map <int, int> finalClimbStairs;
public:
    int climbStairs(int n) {
        
        if (n == 0) return 0;
        
        finalClimbStairs.insert ( std::pair<int,int>(0,1) );
        
        return stairCountFunct(n);
                
    }
    
    int stairCountFunct (int n){
        
        
        if (finalClimbStairs.count(n)){
                        
            return (finalClimbStairs.find(n)->second);
        }
        
        int numOne{0};
        int numTwo{0};
        
        if (n - 2 >= 0) numTwo = stairCountFunct(n - 2);
        
        if (n - 1 >= 0) numOne = stairCountFunct(n - 1);
        
        finalClimbStairs.insert (std::pair<int,int>(n,numTwo + numOne) );
      
        return numTwo + numOne;
        
    }
    
};