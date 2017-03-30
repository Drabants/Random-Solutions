#include <string>
#include <iostream>
using namespace std;

void swap(char* front, char* back){
  char temp= *front;
  *front= *back;
  *back = temp;
  
}

// To execute C++, please define "int main()"
int main() {
  string str;
  cout << "Please input the string you wish to reverse" << endl;
  getline(cin,str);
  char* front = &str[0];
  char* back = &str.back();
  while(front < back){
    swap(front, back);
    front++;
    back--;
  }
  cout << str << endl;
  return 0;
}
