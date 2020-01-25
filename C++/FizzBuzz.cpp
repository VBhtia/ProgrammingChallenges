class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> finalVal;
        int itr{1};
        
        while(itr <=n) {
                         
            if (itr % 15 == 0) {
               finalVal.push_back("FizzBuzz");
            } 
            else if (itr % 3 == 0) {
               finalVal.push_back("Fizz");
            }
            else if (itr % 5 == 0) {
               finalVal.push_back("Buzz");
            }
            else {
               finalVal.push_back(to_string(itr));
            }
            
            itr++;
        }
       
        return finalVal;
    }
        
    
};