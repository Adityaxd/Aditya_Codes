class Solution {
    
public:
   vector<vector<int>> _merge(vector<vector<int>>& intervals) {
      
       vector<vector<int>> result;
       
       if(intervals.size() == 0) return result;
       sort(intervals.begin(),intervals.end());
       
       vector<int> temp_pointer = intervals[0];
       
       for(auto &it : intervals) {
           if(it[0] <= temp_pointer[1]) {
               temp_pointer[1] = max(it[1], temp_pointer[1]);
           }
           else{
               result.push_back(temp_pointer);
              temp_pointer = it;
           }
       }  
       result.push_back(temp_pointer);
       return result;
   }

public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        return _merge(intervals);
    }
};