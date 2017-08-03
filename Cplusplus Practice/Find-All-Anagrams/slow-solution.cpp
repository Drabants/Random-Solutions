class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<int, int> pCount;
        map<int, int> sCount;
        vector<int> subStart;
        int sizeP = p.size();
        for(int i =0; i< sizeP; i++){
            pCount[p[i]]++;
        }
        int sizeS = s.size();
        for(int i = 0; i<sizeS-sizeP+1; i++){
            for(int j = i; j< sizeP+i; j++){
                sCount[s[j]]++;
                cout<<sCount[s[j]] << s[j]<<endl;
            }
            for(int j=0; j<sizeP; j++){
                if(pCount[p[j]] != sCount[p[j]]){
                    sCount.clear();
                    j=sizeP;
                }
            }
            if(!sCount.empty()){
                subStart.push_back(i);
                sCount.clear();
            }
        }
        return subStart;
    }
};
