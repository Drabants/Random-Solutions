using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        string[] tokens_m = Console.ReadLine().Split(' ');
        int m = Convert.ToInt32(tokens_m[0]);
        int n = Convert.ToInt32(tokens_m[1]);
        string[] magazine = Console.ReadLine().Split(' ');
        string[] ransom = Console.ReadLine().Split(' ');
        if (m<n){
            Console.Write("No");
            return;
        }
        Dictionary<string, int> mag = new Dictionary<string, int>();
        Dictionary<string, int> ran = new Dictionary<string, int>();
        mag= FillDictionary(magazine);
        ran= FillDictionary(ransom);     
        foreach(string key in mag.Keys){
            if(ran.ContainsKey(key)){
                ran[key]= ran[key]-mag[key];
            }
        }
        foreach(string key in ran.Keys){
            if(ran[key] > 0){
                Console.Write("No");
                return;
            }
            
        }
        Console.Write("Yes");
    }
    
    static Dictionary<string, int> FillDictionary(string[] document){
        Dictionary<string, int> temp= new Dictionary<string, int>();
        foreach(string current in document){
            if(!temp.ContainsKey(current)){
                temp.Add(current, 1);
            }
            else{
                temp[current]++;
            }
        }
        return temp;
    }
}
