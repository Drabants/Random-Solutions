class Solution {
public:
    
    string reverseString(string s) {
        string reversed;
        int stringEndIterator = s.size()-1;
        while(stringEndIterator >= 0 ){
            reversed.push_back(s[stringEndIterator]);
            stringEndIterator--;
        }
        return reversed;
    }
};
