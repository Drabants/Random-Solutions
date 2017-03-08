using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        string[] tokens_n = Console.ReadLine().Split(' ');
        int n = Convert.ToInt32(tokens_n[0]);
        int k = Convert.ToInt32(tokens_n[1]);
        string[] a_temp = Console.ReadLine().Split(' ');
        int[] a = Array.ConvertAll(a_temp,Int32.Parse);
        int position= RotationalPosition(k, n);
        int[] finished= PerformRotations(a, position, n);
        for(int i=0; i<n; i++){
            Console.Write(finished[i]);
            Console.Write(' ');
        }
        }
        
       static int RotationalPosition(int rotations, int arraySize){

           return arraySize-(rotations%arraySize);
       }
        
       static int[] PerformRotations(int[] array, int position, int arraySize){
           int[] rotatedArray = new int[arraySize];
           int pivot = arraySize-position;
           for(int i= 0; i<position; i++){
               rotatedArray[i]= array[pivot+i];
           }
           for(int i=0; i<pivot; i++){
               rotatedArray[position+i]= array[i];
           }
           return rotatedArray;
       }


}
