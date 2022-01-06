class Solution {

public:
    int _mySqrt(int x) {
        
        long long int low = 1, high = (long long int)(x);
        long long int mid;
        
        if(x == 0)return x;
        
        while((high - low) > 1){
            mid = low + (high - low) / 2;
            long long int sqr = (mid * mid);
            
            if(sqr > x) {
                high = mid;
            }
            else {
                low = mid;
            }
        }
        return (int)low;
    }
public:
    int mySqrt(int x) {
        return _mySqrt(x);
    }
};