using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        string a = Console.ReadLine();
        string b = Console.ReadLine();
        int answer;
        var tempA= new Dictionary<char,int>();
        var tempB= new Dictionary<char,int>();
        tempA= CountEachChar(a);
        tempB= CountEachChar(b);
        answer= FindCharDifference(tempA, tempB);
        Console.Write(answer);
        
    }
    
    static Dictionary<char,int> CountEachChar(string a){
        var strCount = new Dictionary<char,int>();
        string format= "abcdefghijklmnopqrstuvwxyz";
        foreach(char key in format){
            strCount.Add(key, 0);
        }
        for(int i=0; i<a.Length; i++){
            if (!strCount.ContainsKey(a[i]))
                 strCount.Add(a[i], 1);
            else
                {
                 strCount[a[i]]++;
                }
        }
        return strCount;
    }
    
    static int FindCharDifference(Dictionary<char,int> tempA, Dictionary<char,int> tempB){
        int difference=0;
        foreach(char key in tempA.Keys){
            difference += Math.Abs(tempA[key]-tempB[key]);
        }
              return difference;
        }

  
 
    
}
