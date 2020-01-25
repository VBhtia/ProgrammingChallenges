class Solution {
public:
    int minAddToMakeValid(string S) {
       
      
    int finalVal{0};
    int brac = 0;
    int i{0};
        
   // char SArray[S.length()]; 
     for (i = 0; i < S.length(); i++) { 
        
        // SArray[i] = S[i]; 
    
         if (S[i] == '('){
          brac++;
         } 
         else if (S[i] == ')'){
             
        if (brac > 0){
          brac--;
        } 
        else{
            
         finalVal++;   
        } 
         
      }   
     
         
      }  
   return (finalVal + brac);
    
        
    
    }
};