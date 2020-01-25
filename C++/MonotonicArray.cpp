class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        
      int initialVal{0};
      int secondaryVal{A.size()-1};
      
      int signVal{0};
      int itr{1};
    
       if (A.at(initialVal) == A.at(secondaryVal)) {
            signVal=0;
       } 
       else if (A.at(initialVal) < A.at(secondaryVal)) {
            signVal=1;
       } else {
           signVal=-1;
       }
       
       while (itr < A.size()){
           
           if(signVal==0 && A.at(itr)!= A.at(itr-1)){
               return false;
           }
           if( (A.at(itr)-A.at(itr-1)) * signVal < 0){
               
               return false;
           }
           itr++;
       }
      
        return true ;
    
    }
};