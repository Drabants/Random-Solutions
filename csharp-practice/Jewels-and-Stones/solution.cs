using System;
using System.Collections.Generic;

public class Solution {
    public int NumJewelsInStones(string J, string S) {
        Dictionary<char, int> jewels = new Dictionary<char,int>();
        int totalJewels = 0;
        int jSize = J.Length;
        int sSize = S.Length;
        int temp;
        for(int i=0; i < jSize; i++)
        {
            jewels.Add(J[i],1);
        }
        for(int i=0; i< sSize ; i++)
        {
            if(jewels.TryGetValue(S[i], out temp ))
            {
                totalJewels++;
            }
        }
        return totalJewels;
    }
}
