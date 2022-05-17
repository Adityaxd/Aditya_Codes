class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        
        for(int i = 0; i < 32; i++) {
            int setBit = (n >> i) & 1;
            res = res | (setBit << (31 - i));
        }
        return res;
    }
};