class Solution {
    
public:
  
        
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    
        if (grid.size()==0  || grid.at(0).size()==0){
            return 0;  
        }
        
        int flag{0};
        int row = grid.size();
        int col = grid.at(0).size();
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid.at(i).at(j) == 1) {
                    int areaIsland = depthSearch(grid, i, j, row, col, 0);
                    flag = max(flag, areaIsland);
                }
            }
        }
        return flag;
    }
        
   
    
  int depthSearch (vector<vector<int>>& grid, int a, int b, int row, int col, int areaIsland){
      
       if (a < 0 || a >= row || b < 0 || b >= col || grid.at(a).at(b) != 1) {
            return areaIsland;
        }
            
      grid.at(a).at(b)= 2;
      areaIsland = areaIsland +1;
     
      
      vector <vector<int>> covered = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
      
      for (vector<int> temp : covered){
          
         areaIsland =depthSearch(grid, a+temp[0],b + temp[1], row, col, areaIsland);
      }
      return areaIsland;
   }
};