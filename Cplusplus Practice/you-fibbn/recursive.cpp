#include <string>
#include <iostream>
using namespace std;

int fib(int n){
  if(n == 0 || n== 1){
    return n;
  }
  return  fib(n-1) +fib(n-2);
}
// To execute C++, please define "int main()"
int main() {
  int n;
cout << "please input nth number you wish to calculate" << endl;
  cin >> n;
  cout << fib(n);
  
}
