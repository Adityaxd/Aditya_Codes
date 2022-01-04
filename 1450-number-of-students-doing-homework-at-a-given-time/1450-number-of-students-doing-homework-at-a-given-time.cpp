class Solution {
public:
    int _busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int res = 0, sz = startTime.size();
        
        for(int i = 0; i < sz; i++) 
            if(startTime[i] <= queryTime && endTime[i] >= queryTime)
                res += 1;
        return res;
    }
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        return _busyStudent(startTime,endTime,queryTime);
    }
};