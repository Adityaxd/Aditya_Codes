class Solution {
    
public:
    int _maxScoreSightseeingPair(vector<int>& values) {
        
        int maxi = 0;
        int ans = -1, sz = values.size();
        
        for(int i = 0; i < sz; ++i) {
            ans = max(ans, maxi + values[i] - i);
            maxi = max(maxi, values[i] + i);
        }
    return ans;
    
    }
    
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        return _maxScoreSightseeingPair(values);
    }
};