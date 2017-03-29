#include <iostream>
#include <string>

using namespace std;


void reverseWord(string& sentence, int start, int end){
 char temp;
 while (start < end){
   temp = sentence.at(start);
   sentence.at(start)=sentence.at(end);
   sentence.at(end)=temp;
   start++;
   end--;
 }
}

void reverseSentence(string& sentence){
  int wordStart=0;
  for (unsigned int i=0; i<sentence.length(); i++){
    if (sentence.at(i) == ' '){
      reverseWord(sentence, wordStart, i-1);
      wordStart=i+1;
    }
    
  }
  reverseWord(sentence, wordStart, sentence.length()-1);
  reverseWord(sentence, 0, sentence.length()-1);
      
}

    
// To execute C++, please define "int main()"
int main(){
  char m[256];
  cout << "Please input a sentence" << endl;
  cin.getline (m,256);
  string n=m;
  reverseSentence(n);
  cout << n << endl;
  return 0;
}
