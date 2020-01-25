class Solution {
public:
    int flipgame(vector<int>& fronts, vector<int>& backs) {
        
        list <int> allNumbers{};
        
        for (int i=0 ;i< fronts.size();i++){
            
            allNumbers.push_back(fronts[i]);
            allNumbers.push_back(backs[i]);
        }
        allNumbers.sort();
        
     for (int x : allNumbers) {
      bool flag{true};
      int itr{0};
      
       while(itr<fronts.size()){
      
        if (x == fronts.at(itr) && x == backs.at(itr)){
          flag = false;
          break;
        }
        itr++;
      }
      if (flag){
        return x;
      }
    }
     return 0;  
    }
};