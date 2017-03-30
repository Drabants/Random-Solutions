#include <string>
#include <iostream>
using namespace std;

int fib(int n){
  int a, b, c;
  a=0;
  b=1;
  if (n == 0){
    return a;
  }
  while(n >2){
    c= a+b;
    a=b;
    b=c;
    n--;
  }
  return b;
}
// To execute C++, please define "int main()"
int main() {
  int n;
cout << "please input nth number you wish to calculate" << endl;
  cin >> n;
  cout << fib(n);
  
}
