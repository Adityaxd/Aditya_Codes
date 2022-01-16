class Solution {
public:
    int _maxDistToClosest(vector<int>& seats) {
       int i = find(seats.begin(),seats.end(),1) - seats.begin(); // find the first non zero seat.
       int ans = i, count = 1;
        for(int j = i + 1; j < seats.size(); j++) {
            if(seats[j] == seats[j-1]) count++;
            else {
                if(!seats[j-1])
                    ans = max(ans,(count + 1) / 2);
                count = 1;
            }
        }
        if(!seats.back())
            ans = max(ans,count);
        return ans;
    }
public:
    int maxDistToClosest(vector<int>& seats) {
        return _maxDistToClosest(seats);
    }
};