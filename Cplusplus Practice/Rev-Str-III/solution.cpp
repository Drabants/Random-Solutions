class Solution {
public:
    string reverseStr(string s, int k) {
        int size = s.size();
        for(int i = 0; i <size; i +=2*k ){
            reverse(s.begin()+i, min(s.begin()+i+k, s.end()));
        }
        return s;
    }
};
