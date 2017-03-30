#include <iomanip>
#include <iostream>
using namespace std;

// To execute C++, please define "int main()"
int main() {
  for(int i=1; i<100; i+=2){
      cout <<setw(3) <<left << i;

  }
}
