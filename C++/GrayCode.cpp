class Solution {
public:
    vector<int> grayCode(int n) {
     
     vector<int> solution{};
    
   for (int i = 0; i <= ((1 << n) - 1); i++){
       
    solution.push_back((i^i >> 1));
       
   } 
    
   return solution;
    }
};

