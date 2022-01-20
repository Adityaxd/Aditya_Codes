class Solution {
public:
    int _minEatingSpeed(vector<int>& piles, int h) {
        
        int left = 1, right = *max_element(piles.begin(),piles.end());
        
        while (left < right) {
            int mid = (left + right) / 2;
            int hoursSpentEating = 0;
            
            for(int pile : piles) hoursSpentEating += pile / mid + (pile % mid != 0); 
            
            if(hoursSpentEating <= h) 
                right = mid;
            else 
                left = mid + 1;
        }
        return right;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        return _minEatingSpeed(piles,h);
    }
};