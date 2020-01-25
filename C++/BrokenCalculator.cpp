class Solution {
public:
    int brokenCalc(int X, int Y) {
        
        if (X==Y){
            
            return 0;
        }
        else if(Y <X) {
            return X -Y ;
        }
        else {
            
            int val{0};
            
            while(Y>X) {
                if (Y %2 == 0){
                    
                    Y = Y/2;
                    val = val +1;
                 }
                else{
                    Y = Y+1;
                    Y = Y/2;
                    val = val+2;
                    
                }
              
            }
            return(X==Y?val: (val + (X-Y)));
        }
    }
};