class Solution {
public:
    string toLowerCase(string str) {
        for(char& character : str){
            if(character >= 'A' && character <= 'Z'){
                character = character - 'A' + 'a';
            }
        }
        return str;
    }
};
