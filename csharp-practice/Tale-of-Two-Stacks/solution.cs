using System;
using System.Collections.Generic;
using System.IO;
class Solution {
    static void Main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution */      int queries = Convert.ToInt32(Console.ReadLine());     
        int temp;
        Stack<int> a= new Stack<int>();
        Stack<int> b= new Stack<int>();        
        for(int i=0; i<queries; i++){
            string[] currentQuery=Console.ReadLine().Split(' ');
            int request=Int32.Parse(currentQuery[0]);
            if(request==1){
                temp=Int32.Parse(currentQuery[1]);
                Enqueue(temp, a);
            }
        else if(request==2){
                if(b.Count==0){
                    fillB(a,b);
                }
                Dequeue(b);
            }
        
        else{
                if(b.Count==0){
                    fillB(a,b);
                }
                Console.WriteLine(b.Peek());
            }
        }
    }
    
    static void Enqueue(int qued, Stack<int> queue){
        queue.Push(qued);
    }
    
    static void Dequeue(Stack<int> b){
            b.Pop();
    }
    
    static void fillB(Stack<int> a, Stack<int> b){
        while(a.Count !=0){
            b.Push(a.Pop());
        }
    }
}
