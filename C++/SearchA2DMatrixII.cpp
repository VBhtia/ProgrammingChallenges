class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
               
      if (matrix.size()==0){
            return false;
      }
        
      int row{matrix.size()};
      int col{matrix.at(0).size()};
        
      int newRow{0};
      int newCol{col-1};
        
      while (newRow < row && newCol >= 0) {
      if (matrix[newRow][newCol] == target){
          return true;
      }
      else if (target < matrix.at(newRow).at(newCol)){
          --newCol;
      } 
      else if (target > matrix.at(newRow).at(newCol)){
          
          newRow ++;
      } 
    }
    return false;
    }
};