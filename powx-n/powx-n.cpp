class Solution {
    
public:
    double _myPow(double x, int n) {
        double ans = 1.0;
        long long tempN = n;
        
        if(tempN < 0) tempN = -1 * tempN;
        
        while(tempN > 0) {
            if((tempN & 1)) {
                ans *= x;
                tempN -= 1;
            }
            else {
                x *= x;
                tempN /= 2;
            }
        }
        if(n < 0) ans = (double)(1.0) / (double)(ans);
        return ans;
    }    
    
public:
    double myPow(double x, int n) {
        return _myPow(x,n);
    }
};