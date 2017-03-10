using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int t = Convert.ToInt32(Console.ReadLine());
        for(int a0 = 0; a0 < t; a0++){
            string expression = Console.ReadLine();
        if(isBalanced(expression)){
            Console.WriteLine("YES");
        }
        else{
            Console.WriteLine("NO");
        }

        }

    }
    
        static bool isBalanced(string expression){
         char temp;
        Stack<char> theBalancer= new Stack<char>();
        for(int i=0; i<expression.Length; i++){
            if(expression[i] == '{'){
                theBalancer.Push('}');
            }
            if(expression[i] == '['){
                theBalancer.Push(']');
            }
            if(expression[i] == '('){
                theBalancer.Push(')');
            }
            if(theBalancer.Count==0){
                return false;
            }
            if(expression[i] == '}'){
                temp=theBalancer.Pop();
                if(temp != '}'){
                    return false;
                }
            }
            if(expression[i] == ']'){
                temp=theBalancer.Pop();
                if(temp != ']'){
                    return false;
                }
            }
            if(expression[i] == ')'){
                temp=theBalancer.Pop();
                if(temp != ')'){
                    return false;
                }                
            }
        }
            if(theBalancer.Count == 0){
                return true;
            }
            else{
                return false;
            }
        }
}
