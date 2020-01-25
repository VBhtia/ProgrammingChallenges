class Solution {
public:
    int romanToInt(string s){
        
    if (s.length()==0)  return -1;
        
    int tempVal;
    int otherTempVal;
    int sumVal{0};
    map <char, int> newVal;
    
    newVal.insert( pair<char, int>('I', 1) );
    newVal.insert( pair<char, int>('V', 5) );
    newVal.insert( pair<char, int>('X', 10) );
    newVal.insert( pair<char, int>('L', 50) );
    newVal.insert( pair<char, int>('C', 100) );
    newVal.insert( pair<char, int>('D', 500) );
    newVal.insert( pair<char, int>('M', 1000) );
    
   for (int i = 0; i < s.length(); ) {
            tempVal = newVal.find(s.at(i))->second;

            if (i + 1 < s.length()) {
            otherTempVal = newVal.find(s.at(i + 1))->second;
            } else {
                otherTempVal = 0;
            }

            if (tempVal >= otherTempVal) {
                i++;
            } else {
                tempVal = otherTempVal - tempVal;
                i = i + 2;
            }
            sumVal = sumVal + tempVal;
        }
        
    return sumVal;
    }
       
};