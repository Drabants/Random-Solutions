class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.length() == 0){
            return 0;
        }
        int word = 0;
        int temp = s.length()-1;
        while( temp >= 0 && s[temp] == ' ' ){
            temp--;
        }
        while( temp >= 0 && s[temp] != ' ' ){
            word ++; 
            temp--;
        }
        return word;
    }
};
