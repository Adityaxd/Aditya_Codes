class Solution {

public:
    int _mostWordsFound(vector<string>& sentences) {
       int words = 0, maximum = 0;
        
        for(auto &it : sentences) {
            words = count(it.begin(),it.end(),' ') + 1;
            maximum = max(words,maximum);
        }
        return maximum;
    }
    
public:
    int mostWordsFound(vector<string>& sentences) {
       return _mostWordsFound (sentences);
    }
};