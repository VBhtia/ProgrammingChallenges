class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int citLen = citations.size();
        
        int val[citLen + 1]{0};
        int tempVal[citLen + 1]{0};
        int i{0};
        
        while(i < citLen){
          if (citations[i] > citLen) {
            citations[i] = citLen;
            } i++;
        }
        
        for (int x : citations) {
          val[x] = val[x] +1 ;
         }
        
        tempVal[citLen] = val[citLen];
        
        int itr1= citLen - 1;
        
        while (itr1>=0){
            
            tempVal[itr1] = val[itr1] + tempVal[itr1 + 1]; 
            itr1--;
        }
       
        int itr2 = citLen;
        while (itr2 >=0){
            if (itr2 <= tempVal[itr2]) {
               return itr2;
            }
          itr2--;
         }
        
      return 0;
        
    }
};