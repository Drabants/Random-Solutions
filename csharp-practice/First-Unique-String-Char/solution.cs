public class Solution {
    public int FirstUniqChar(string s) {
        Dictionary<char, int> letters = new Dictionary<char, int>();
        int size = s.Length;
        for(int i=0; i<size; i++){
            if(!letters.ContainsKey(s[i]))
            {
                letters.Add(s[i], 1);
            }
            else
            {
            letters[s[i]]++;
            }
        }
        for(int i = 0; i<size; i++){
            if(letters[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
}
