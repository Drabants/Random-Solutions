class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> sCount(26,0), pCount(26,0), answer;
        int pSize = p.size();
        int sSize = s.size();
        for(int i=0; i<pSize; i++){
            sCount[s[i]-'a']++;
            pCount[p[i]-'a']++;
        }
        if(sCount==pCount){
            answer.push_back(0);
        }
        for(int i=pSize; i<sSize; i++){
            sCount[s[i]-'a']++;
            sCount[s[i-pSize]-'a']--;
            if(sCount == pCount){
                answer.push_back(i-p.size()+1);
            }
        }
        return answer;  
    }
};
