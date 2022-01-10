class Solution {
public:
    bool _isValid(string s) {
       
        if(s.length()&1) return false;
        
        stack<char> stk;
        
        for(auto x : s) {
            if( x == '(' or x == '{' or x == '[') stk.push(x);
            else {
                if( stk.empty() or ( stk.top() == '(' and x != ')' ) or ( stk.top() == '{' and x != '}' ) or (stk.top() == '[' and x != ']' ) ) return false;
                    stk.pop();
            }
        }
        return stk.empty();   
    }
public:
    bool isValid(string s) {
        return _isValid(s);
    }
};