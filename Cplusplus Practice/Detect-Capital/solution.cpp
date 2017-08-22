class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word[0] < 'a' && word[1] < 'a'){
            return allCap(word);
        }
        else if(word[0] >='a'){
            return noCap(word);
        }
        else{
            return firstCap(word);
        }
    }
    
    bool allCap(string word){
        for(int i=2; i<word.size();i++){
            if(word[i] > 'Z'){
                return false;
            }
        }
        return true;
    }
    
    bool firstCap(string word){
        for(int i=1; i<word.size(); i++){
            if(word[i]<'a'){
                return false;
            }
        }
        return true;
    }
    
    bool noCap(string word){
        for(int i=1; i<word.size(); i++){
            if(word[i] <'a'){
                return false;
            }
        }
        return true;
    }
};
